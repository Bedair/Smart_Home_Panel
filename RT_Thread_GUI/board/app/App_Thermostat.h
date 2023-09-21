/**********************************************************************
* File Name : App_Thermostat.h
* 
* Description : Header file for the component responsible for Controlling
                the thermostat
*
* Author : Mohamed Bedair
*
* Date : 21 Sep 2023
*
**********************************************************************/


#ifndef APP_THERMOSTAT_H_
#define APP_THERMOSTAT_H_

#include "rthw.h"
#include "lvgl.h"
#include "ui.h"
#include "lv_event.h"
#include "ui_events.h"


void App_Thermostat_Init(void);

void App_Thermostat_MainFunction(void);

#endif