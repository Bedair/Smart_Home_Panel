/**********************************************************************
* File Name : RTC_Drv.h
* 
* Description : source file for RTC Driver
*
* Author : Mohamed Bedair
*
* Date : 10 Sep 2023
*
**********************************************************************/

/**********************************************************************
*                            Macro Section                            *
**********************************************************************/

#include "RTC_Drv.h"




#define DEC_TO_BCD(x) ((((x / 10) << 4) & 0xF0) |(x % 10))
#define BCD_TO_DEX(x) ((((x &  0xF0) >> 4) * 10) + (x & 0x0F))

/**********************************************************************
*                           Local Functions                           *
**********************************************************************/


/**********************************************************************
*                          Global Variables                           *
**********************************************************************/



/**********************************************************************
*                          Global Functions                           *
**********************************************************************/
void RTC_Init(RTC_Mode_sel mode)
{
    // Enable Sub-Clock 
    R_SYSTEM->SOSCCR = 0U;


    /* Select the count source (RCR4 -> RCKSEL) to Osc */
    R_RTC->RCR4 = 0x0;

    /* Supply 6 clocks of the clock selected (~ 183 us)*/
    rt_hw_us_delay(185);

    /* Set the START bit to 0 */
    R_RTC->RCR2_b.START = 0;

    /* Wait for the RCR2.START bit to become 0 */
    while (R_RTC->RCR2_b.START != 0);

    /* Select count mode RCR2.CNTMD bit  */
    R_RTC->RCR2_b.CNTMD = mode;

    R_RTC->RCR2_b.AADJE = 1;

    /* RTC software reset RCR2.RESET bit */
    R_RTC->RCR2_b.RESET = 1U;

    /* Wait for the RCR2.RESET bit to become 0 */
    while (R_RTC->RCR2_b.RESET != 0);

}



void RTC_Time_Set(RTC_Date_Time_Type * dateTime)
{
    /* Write 0 to the RCR2.START bit */
    R_RTC->RCR2_b.START = 0;

    /* Wait for the RCR2.START bit to become 0 */
    while (R_RTC->RCR2_b.START != 0);


    /* Update Time */
    R_RTC->RSECCNT = DEC_TO_BCD((uint8_t) dateTime->second);
    R_RTC->RMINCNT = DEC_TO_BCD((uint8_t) dateTime->minute);
    R_RTC->RHRCNT  = DEC_TO_BCD((uint8_t) dateTime->hour) & 0x3F;
    R_RTC->RHRCNT_b.PM = dateTime->PM;
    R_RTC->RWKCNT  = DEC_TO_BCD((uint8_t) dateTime->weekDay);
    R_RTC->RDAYCNT = DEC_TO_BCD((uint8_t) dateTime->monthDay);
    R_RTC->RMONCNT = DEC_TO_BCD((uint8_t) (dateTime->month + 1));
    R_RTC->RYRCNT  = DEC_TO_BCD((uint8_t) dateTime->year);

    /* Write 1 to the RCR2.START bit */
    R_RTC->RCR2_b.START = 1;

    /* Wait for the RCR2.START bit to become 1 */
    while (R_RTC->RCR2_b.START != 1);
}

void RTC_Time_Get(RTC_Date_Time_Type * dateTime)
{
    /* Disable the NVIC carry interrupt request */
    NVIC_DisableIRQ(RTC_IRQn);

    /* Enable the RTC carry interrupt request */
     R_RTC->RCR1 |= 0x2;

    do
    {
        /* Clear the interrupt flag */
        NVIC_ClearPendingIRQ(RTC_IRQn);

        /* Read the counter */
        dateTime->second    = (int32_t) BCD_TO_DEX(R_RTC->RSECCNT);
        dateTime->minute    = (int32_t) BCD_TO_DEX(R_RTC->RMINCNT);
        dateTime->hour      = (int32_t) BCD_TO_DEX(R_RTC->RHRCNT & 0x3F);
        dateTime->PM        = R_RTC->RHRCNT_b.PM;
        dateTime->weekDay   = (int32_t) BCD_TO_DEX(R_RTC->RWKCNT);
        dateTime->monthDay  = (int32_t) BCD_TO_DEX(R_RTC->RDAYCNT);
        dateTime->month     = (int32_t) BCD_TO_DEX(R_RTC->RMONCNT) - 1;
        dateTime->year      = (int32_t) BCD_TO_DEX( R_RTC->RYRCNT);


    }while (NVIC_GetPendingIRQ(RTC_IRQn));
}
