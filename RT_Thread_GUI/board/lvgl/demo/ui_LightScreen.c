// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"

void ui_LightScreen_screen_init(void)
{
ui_LightScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_LightScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_LightScreen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LightScreen, lv_color_hex(0x168689), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LightScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_LightScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_LightScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_LightScreen, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Header = lv_obj_create(ui_LightScreen);
lv_obj_set_width( ui_Header, 480);
lv_obj_set_height( ui_Header, 35);
lv_obj_clear_flag( ui_Header, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Header, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Header, lv_color_hex(0x040B1E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Header, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Header, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Date = lv_label_create(ui_Header);
lv_obj_set_width( ui_Date, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Date, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Date, -6 );
lv_obj_set_y( ui_Date, -8 );
lv_label_set_text(ui_Date,"19 Sep 2023");
lv_obj_set_style_text_color(ui_Date, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Date, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label3 = lv_label_create(ui_Header);
lv_obj_set_width( ui_Label3, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label3, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label3, 385 );
lv_obj_set_y( ui_Label3, -6 );
lv_label_set_text(ui_Label3,"02:59 AM");
lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Slider1 = lv_slider_create(ui_LightScreen);
lv_slider_set_value( ui_Slider1, 50, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider1)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider1, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider1, 10);
lv_obj_set_height( ui_Slider1, 100);
lv_obj_set_x( ui_Slider1, -130 );
lv_obj_set_y( ui_Slider1, 25 );
lv_obj_set_align( ui_Slider1, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_Slider1, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Slider1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Slider1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Slider1, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x1F36AA), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0x4E6982), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Label5 = lv_label_create(ui_LightScreen);
lv_obj_set_width( ui_Label5, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label5, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label5, -178 );
lv_obj_set_y( ui_Label5, -10 );
lv_obj_set_align( ui_Label5, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label5,"Light 1");

ui_Switch1 = lv_switch_create(ui_LightScreen);
lv_obj_set_width( ui_Switch1, 50);
lv_obj_set_height( ui_Switch1, 25);
lv_obj_set_x( ui_Switch1, -177 );
lv_obj_set_y( ui_Switch1, 50 );
lv_obj_set_align( ui_Switch1, LV_ALIGN_CENTER );
lv_obj_add_state( ui_Switch1, LV_STATE_CHECKED );     /// States
lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0x4C5CA1), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Switch1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Switch1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Switch1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Switch1, lv_color_hex(0x4A6983), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Slider2 = lv_slider_create(ui_LightScreen);
lv_slider_set_value( ui_Slider2, 50, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider2)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider2, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider2, 10);
lv_obj_set_height( ui_Slider2, 100);
lv_obj_set_x( ui_Slider2, 27 );
lv_obj_set_y( ui_Slider2, 25 );
lv_obj_set_align( ui_Slider2, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_Slider2, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Slider2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Slider2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Slider2, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0x1F36AA), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider2, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0x4E6982), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider2, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Label1 = lv_label_create(ui_LightScreen);
lv_obj_set_width( ui_Label1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label1, -32 );
lv_obj_set_y( ui_Label1, -10 );
lv_obj_set_align( ui_Label1, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label1,"Light 2");

ui_Switch2 = lv_switch_create(ui_LightScreen);
lv_obj_set_width( ui_Switch2, 50);
lv_obj_set_height( ui_Switch2, 25);
lv_obj_set_x( ui_Switch2, -32 );
lv_obj_set_y( ui_Switch2, 50 );
lv_obj_set_align( ui_Switch2, LV_ALIGN_CENTER );
lv_obj_add_state( ui_Switch2, LV_STATE_CHECKED );     /// States
lv_obj_set_style_bg_color(ui_Switch2, lv_color_hex(0x4A5DA4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Switch2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Switch2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Switch2, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Switch2, lv_color_hex(0x4A6983), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch2, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Label2 = lv_label_create(ui_LightScreen);
lv_obj_set_width( ui_Label2, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label2, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label2, 125 );
lv_obj_set_y( ui_Label2, -10 );
lv_obj_set_align( ui_Label2, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label2,"Light 3");

ui_Switch3 = lv_switch_create(ui_LightScreen);
lv_obj_set_width( ui_Switch3, 50);
lv_obj_set_height( ui_Switch3, 25);
lv_obj_set_x( ui_Switch3, 125 );
lv_obj_set_y( ui_Switch3, 50 );
lv_obj_set_align( ui_Switch3, LV_ALIGN_CENTER );
lv_obj_add_state( ui_Switch3, LV_STATE_CHECKED );     /// States
lv_obj_set_style_bg_color(ui_Switch3, lv_color_hex(0x4A5DA4), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Switch3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Switch3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Switch3, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Switch3, lv_color_hex(0x4A6983), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Switch3, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Slider3 = lv_slider_create(ui_LightScreen);
lv_slider_set_value( ui_Slider3, 50, LV_ANIM_OFF);
if (lv_slider_get_mode(ui_Slider3)==LV_SLIDER_MODE_RANGE ) lv_slider_set_left_value( ui_Slider3, 0, LV_ANIM_OFF);
lv_obj_set_width( ui_Slider3, 10);
lv_obj_set_height( ui_Slider3, 100);
lv_obj_set_x( ui_Slider3, 185 );
lv_obj_set_y( ui_Slider3, 25 );
lv_obj_set_align( ui_Slider3, LV_ALIGN_CENTER );
lv_obj_set_style_radius(ui_Slider3, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Slider3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Slider3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Slider3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Slider3, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider3, lv_color_hex(0x1F36AA), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider3, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_bg_color(ui_Slider3, lv_color_hex(0x4E6982), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Slider3, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Button1 = lv_btn_create(ui_LightScreen);
lv_obj_set_width( ui_Button1, 100);
lv_obj_set_height( ui_Button1, 35);
lv_obj_set_x( ui_Button1, -115 );
lv_obj_set_y( ui_Button1, -60 );
lv_obj_set_align( ui_Button1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label6 = lv_label_create(ui_Button1);
lv_obj_set_width( ui_Label6, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label6, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label6, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label6,"Thermostat");
lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button2 = lv_btn_create(ui_LightScreen);
lv_obj_set_width( ui_Button2, 100);
lv_obj_set_height( ui_Button2, 35);
lv_obj_set_x( ui_Button2, 98 );
lv_obj_set_y( ui_Button2, -60 );
lv_obj_set_align( ui_Button2, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x1834AC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label4 = lv_label_create(ui_Button2);
lv_obj_set_width( ui_Label4, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label4, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label4, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label4,"Light");
lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);

}