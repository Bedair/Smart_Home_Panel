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

/**********************************************************************
*                            Macro Section                            *
**********************************************************************/

#include "App_Light.h"
#include "hal_data.h"

Light_Type Light1;
Light_Type Light2;
Light_Type Light3;


/**********************************************************************
*                           Local Functions                           *
**********************************************************************/


/**********************************************************************
*                          Global Variables                           *
**********************************************************************/



/**********************************************************************
*                          Global Functions                           *
**********************************************************************/
void App_Light_Init(void)
{
    Light1.State = lv_obj_has_state(ui_Light1Switch, LV_STATE_CHECKED);
    Light2.State = lv_obj_has_state(ui_Light2Switch, LV_STATE_CHECKED);
    Light3.State = lv_obj_has_state(ui_Light3Switch, LV_STATE_CHECKED);

    Light1.Brightness = lv_slider_get_value(ui_Light1Slider);
    Light2.Brightness = lv_slider_get_value(ui_Light2Slider);
    Light3.Brightness = lv_slider_get_value(ui_Light3Slider);

    R_GPT_Open(&g_timer7_ctrl, &g_timer7_cfg);
    R_GPT_Open(&g_timer8_ctrl, &g_timer8_cfg);
    R_GPT_Open(&g_timer4_ctrl, &g_timer4_cfg);
}


void App_Light_MainFunction(void)
{   
    timer_info_t info;

    if (Light1.State)
    {
        R_GPT_InfoGet(&g_timer7_ctrl, &info);
        R_GPT_Start(&g_timer7_ctrl);
        R_GPT_DutyCycleSet(&g_timer7_ctrl, (info.period_counts * ((uint8_t) Light1.Brightness) / 100), GPT_IO_PIN_GTIOCA);
    }
    else
    {
        R_GPT_Stop(&g_timer7_ctrl);
    }


    if (Light2.State)
    {
        R_GPT_InfoGet(&g_timer8_ctrl, &info);
        R_GPT_Start(&g_timer8_ctrl);
        R_GPT_DutyCycleSet(&g_timer8_ctrl, (info.period_counts * ((uint8_t) Light2.Brightness) / 100), GPT_IO_PIN_GTIOCB);
    }
    else
    {
        R_GPT_Stop(&g_timer8_ctrl);
    }


    if (Light3.State)
    {
        R_GPT_InfoGet(&g_timer4_ctrl, &info);
        R_GPT_Start(&g_timer4_ctrl);
        R_GPT_DutyCycleSet(&g_timer4_ctrl, (info.period_counts * ((uint8_t) Light3.Brightness) / 100), GPT_IO_PIN_GTIOCA);
    }
    else
    {
        R_GPT_Stop(&g_timer4_ctrl);
    }

    
}



void Light_1_Button_Clicked(lv_event_t * e)
{
    Light1.State = lv_obj_has_state(ui_Light1Switch, LV_STATE_CHECKED);
}

void Light_2_Button_Clicked(lv_event_t * e)
{
    Light2.State = lv_obj_has_state(ui_Light2Switch, LV_STATE_CHECKED);
}

void Light_3_Button_Clicked(lv_event_t * e)
{
    Light3.State = lv_obj_has_state(ui_Light3Switch, LV_STATE_CHECKED);
}


void Light_1_Slider_Changed(lv_event_t * e)
{
    Light1.Brightness = lv_slider_get_value(ui_Light1Slider);
}
void Light_2_Slider_Changed(lv_event_t * e)
{
    Light2.Brightness = lv_slider_get_value(ui_Light2Slider);
}
void Light_3_Slider_Changed(lv_event_t * e)
{
    Light3.Brightness = lv_slider_get_value(ui_Light3Slider);
}