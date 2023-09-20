/**********************************************************************
* File Name : App_Light.c
* 
* Description : source file for the component responsible for Controlling 
                Light based on the 
*
* Author : Mohamed Bedair
*
* Date : 20 Sep 2023
*
**********************************************************************/


#ifndef APP_LIGHT_H_
#define APP_LIGHT_H_

#include "rthw.h"
#include "lvgl.h"
#include "ui.h"
#include "lv_event.h"
#include "ui_events.h"


typedef struct 
{
    bool State;
    uint32_t Brightness;
}Light_Type;


void App_Light_Init(void);

void App_Light_MainFunction(void);

#endif