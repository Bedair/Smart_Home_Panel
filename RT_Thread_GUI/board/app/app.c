
/**********************************************************************
* File Name : app.c
* 
* Description : Source file for the application main file
*
* Author : Mohamed Bedair
*
* Date : 10 Sep 2023
*
**********************************************************************/

/**********************************************************************
*                            Macro Section                            *
**********************************************************************/
#include "app.h"
#include "RTC_Drv.h"
#include "ui.h"
#include "hal_data.h"



#define DATE_STRING_LENGTH      12
#define TIME_STRING_LENGTH      9

#define TO_ASCII(x)             (x + 48)

const RTC_Date_Time_Type Default_Time_Date = 
{
    .second = 0,
    .minute = 20,
    .hour = 10,
    .PM = 1,

    .weekDay = 2, 
    .monthDay = 15,
    .month = 1,
    .year = 23,
};

/**********************************************************************
*                           Local Functions                           *
**********************************************************************/
void App_Get_Date_Time(char *date, char *time);
void App_GUI_Update_Date_Time(void);

const char months[12][3] = 
{
    {'J', 'A', 'N'},
    {'F', 'E', 'B'},
    {'M', 'A', 'R'},
    {'A', 'P', 'R'},
    {'M', 'A', 'Y'},
    {'J', 'U', 'N'},
    {'J', 'U', 'L'},
    {'A', 'U', 'G'},
    {'S', 'E', 'P'},
    {'O', 'C', 'T'},
    {'N', 'O', 'V'},
    {'D', 'E', 'C'}
};


/**********************************************************************
*                          Global Variables                           *
**********************************************************************/
volatile RTC_Date_Time_Type date_time; 

char DateString[DATE_STRING_LENGTH] = {0};
char TimeString[TIME_STRING_LENGTH] = {0};

/**********************************************************************
*                          Global Functions                           *
**********************************************************************/
void App_Init(void)
{
    RTC_Init(RTC_MODE_CALENDAR);
    RTC_Time_Set(&Default_Time_Date);

    R_GPT_Open(&g_timer7_ctrl, &g_timer7_cfg);
    R_GPT_Start(&g_timer7_ctrl);

    R_GPT_Open(&g_timer8_ctrl, &g_timer8_cfg);
    R_GPT_Start(&g_timer8_ctrl);
}


void App_MainFunction(void)
{ 
    App_GUI_Update_Date_Time();
}

void App_GUI_Update_Date_Time(void)
{
    App_Get_Date_Time(DateString, TimeString);
    lv_label_set_text(ui_LightDate, DateString);
    lv_label_set_text(ui_ThermoDate, DateString);

    lv_label_set_text(ui_LightTime, TimeString);
    lv_label_set_text(ui_ThermoTime, TimeString);
}

void App_Get_Date_Time(char *date, char *time)
{
    RTC_Time_Get(&date_time);

    memset(date, 0, DATE_STRING_LENGTH);
    memset(time, 0, TIME_STRING_LENGTH);

    /* Update Date */
    date[0] = TO_ASCII(date_time.monthDay / 10);
    date[1] = TO_ASCII(date_time.monthDay % 10);

    date[2] = ' '; /* Space */
    memcpy(&date[3], months[date_time.month - 1], 3);
    date[6] = ' '; /* Space */

    date[7] = '2';
    date[8] = '0';
    date[9] = TO_ASCII(date_time.year / 10);
    date[10] = TO_ASCII(date_time.year % 10);

    date[11] = '\0';


    /* Update TIme */
    time[0] = TO_ASCII(date_time.hour / 10);
    time[1] = TO_ASCII(date_time.hour % 10);
    time[2] = ':';
    time[3] = TO_ASCII(date_time.minute / 10);
    time[4] = TO_ASCII(date_time.minute % 10);
    time[5] = ' ';
    date_time.PM? (time[6] = 'P') : (time[6] = 'A');
    time[7] = 'M';
    time[8] = '\0';    
}