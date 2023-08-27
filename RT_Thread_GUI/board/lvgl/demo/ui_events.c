// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: SmartHome

#include "ui.h"

static volatile uint8_t Press_Count = 0;


void Button_Pressed(lv_event_t * e)
{
	// Your code here
	Press_Count++;
	
	char snum[5];

	// Convert 123 to string [buf]
	itoa(Press_Count, snum, 10);

	lv_textarea_set_text(ui_TextArea2, snum);
}