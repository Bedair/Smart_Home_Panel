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

/**********************************************************************
*                            Macro Section                            *
**********************************************************************/
#include "App_Thermostat.h"
#include "math.h"



#define TO_ASCII(x)             (x + 48)
#define TO_FAHRENHEIT(x)        round(((x * 9 / 5) + 32))
#define TEMPERATURE_VALUE       (18)
#define HUMIDITY_VALUE          (70)




typedef enum{
    TEMPERATURE_CELSIUSE,
    TEMPERATURE_FAHRENHEIT
}Temperature_Type;

/**********************************************************************
*                          Global Variables                           *
**********************************************************************/
uint16_t AC_Value;
uint8_t TemperatureFahrenheit;
uint8_t TemperatureCelsius;
Temperature_Type Temperature_Representation;
uint8_t Humidity_Value;


/**********************************************************************
*                           Local Functions                           *
**********************************************************************/
static uint8_t App_Thermostat_Get_Current_Temperature(void);
static uint8_t App_Thermostat_Get_Current_Humidity(void);
static void App_Thermostat_Update_Temperature(void);
static void App_Thermostat_Update_Humidity(void);





static uint8_t App_Thermostat_Get_Current_Temperature(void)
{
    return TEMPERATURE_VALUE;
}

static uint8_t App_Thermostat_Get_Current_Humidity(void)
{
    return HUMIDITY_VALUE;
}

static void App_Thermostat_Update_Temperature(void)
{
    TemperatureCelsius = App_Thermostat_Get_Current_Temperature();
    TemperatureFahrenheit = TO_FAHRENHEIT(TemperatureCelsius);

    char tempString[5];

    if (Temperature_Representation == TEMPERATURE_CELSIUSE)
    {
        tempString[0] = TO_ASCII(TemperatureCelsius / 10);
        tempString[1] = TO_ASCII(TemperatureCelsius % 10);
        tempString[2] = ' ';
        tempString[3] = 'C';
        tempString[4] = '\0';

        lv_obj_set_style_bg_color(ui_CelsiusButton, lv_color_hex(0x1834AC), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_obj_set_style_bg_color(ui_FahrenheitButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
    }
    else
    {
        tempString[0] = TO_ASCII(TemperatureFahrenheit / 10);
        tempString[1] = TO_ASCII(TemperatureFahrenheit % 10);
        tempString[2] = ' ';
        tempString[3] = 'F';
        tempString[4] = '\0';

        lv_obj_set_style_bg_color(ui_FahrenheitButton, lv_color_hex(0x1834AC), LV_PART_MAIN | LV_STATE_DEFAULT );
        lv_obj_set_style_bg_color(ui_CelsiusButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
    }

    lv_label_set_text(ui_TemperaturLable, tempString);
}

static void App_Thermostat_Update_Humidity(void)
{
    char tempString[5];

    Humidity_Value = App_Thermostat_Get_Current_Humidity();

    tempString[0] = TO_ASCII(Humidity_Value / 10);
    tempString[1] = TO_ASCII(Humidity_Value % 10);
    tempString[2] = ' ';
    tempString[3] = '%';
    tempString[4] = '\0';

    lv_label_set_text(ui_HumedityLable, tempString);
}

/**********************************************************************
*                          Global Functions                           *
**********************************************************************/
void UpdateAC(lv_event_t * e)
{
    char tempString[5];
    AC_Value = lv_arc_get_value(ui_ACArc);

    tempString[0] = TO_ASCII(AC_Value / 10);
    tempString[1] = TO_ASCII(AC_Value % 10);
    tempString[2] = ' ';
    tempString[3] = 'C';
    tempString[4] = '\0';
    lv_label_set_text(ui_ACValueLable, tempString);
}


void ToCelsius(lv_event_t * e)
{
    Temperature_Representation = TEMPERATURE_CELSIUSE;
}


void ToFahrenheit(lv_event_t * e)
{
    Temperature_Representation = TEMPERATURE_FAHRENHEIT;
}

void App_Thermostat_Init(void)
{
    
}

void App_Thermostat_MainFunction(void)
{
    App_Thermostat_Update_Temperature();
    App_Thermostat_Update_Humidity();
}