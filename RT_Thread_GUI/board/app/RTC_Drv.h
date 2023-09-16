/**********************************************************************
* File Name : RTC_Drv.h
* 
* Description : Header file for RTC Driver
*
* Author : Mohamed Bedair
*
* Date : 10 Sep 2023
*
**********************************************************************/


#ifndef RTC_DRV_H_
#define RTC_DRV_H_

#include "bsp_arm_exceptions.h"
#include "bsp_feature.h"
#include "renesas.h"
#include "base_addresses.h"
#include "rthw.h"



typedef enum {
    RTC_MODE_CALENDAR = 0,
    RTC_MODE_COUNT
}RTC_Mode_sel;

typedef struct{
    uint8_t second;
    uint8_t minute;
    uint8_t hour;

    uint8_t weekDay;
    uint8_t monthDay;
    uint8_t month;
    uint8_t year;
}RTC_Date_Time_Type;


void RTC_Init(RTC_Mode_sel mode);

void RTC_Time_Set(RTC_Date_Time_Type * dateTime);
void RTC_Time_Get(RTC_Date_Time_Type * dateTime);

#endif
