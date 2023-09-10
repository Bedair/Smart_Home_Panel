// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SmartHome_Panel

#include "../ui.h"

void ui_ThermostatScreen_screen_init(void)
{
ui_ThermostatScreen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_ThermostatScreen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_ThermostatScreen, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_ThermostatScreen, lv_color_hex(0x168689), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ThermostatScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_ThermostatScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_ThermostatScreen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Header1 = lv_obj_create(ui_ThermostatScreen);
lv_obj_set_width( ui_Header1, 480);
lv_obj_set_height( ui_Header1, 35);
lv_obj_clear_flag( ui_Header1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Header1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Header1, lv_color_hex(0x040B1E), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Header1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Header1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ThermoDate = lv_label_create(ui_Header1);
lv_obj_set_width( ui_ThermoDate, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ThermoDate, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ThermoDate, -6 );
lv_obj_set_y( ui_ThermoDate, -8 );
lv_label_set_text(ui_ThermoDate,"19 Sep 2023");
lv_obj_set_style_text_color(ui_ThermoDate, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_ThermoDate, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ThermoTime = lv_label_create(ui_Header1);
lv_obj_set_width( ui_ThermoTime, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_ThermoTime, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_ThermoTime, 385 );
lv_obj_set_y( ui_ThermoTime, -6 );
lv_label_set_text(ui_ThermoTime,"02:59 AM");
lv_obj_set_style_text_color(ui_ThermoTime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_ThermoTime, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button3 = lv_btn_create(ui_ThermostatScreen);
lv_obj_set_width( ui_Button3, 100);
lv_obj_set_height( ui_Button3, 35);
lv_obj_set_x( ui_Button3, -115 );
lv_obj_set_y( ui_Button3, -60 );
lv_obj_set_align( ui_Button3, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x1834AC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label11 = lv_label_create(ui_Button3);
lv_obj_set_width( ui_Label11, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label11, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label11, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label11,"Thermostat");
lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button4 = lv_btn_create(ui_ThermostatScreen);
lv_obj_set_width( ui_Button4, 100);
lv_obj_set_height( ui_Button4, 35);
lv_obj_set_x( ui_Button4, 98 );
lv_obj_set_y( ui_Button4, -60 );
lv_obj_set_align( ui_Button4, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Button4, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Button4, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Button4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label12 = lv_label_create(ui_Button4);
lv_obj_set_width( ui_Label12, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label12, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label12, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label12,"Light");
lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label8 = lv_label_create(ui_ThermostatScreen);
lv_obj_set_width( ui_Label8, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label8, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label8, 100 );
lv_obj_set_y( ui_Label8, -24 );
lv_obj_set_align( ui_Label8, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label8,"Air Condition");

ui_ACArc = lv_arc_create(ui_ThermostatScreen);
lv_obj_set_width( ui_ACArc, 150);
lv_obj_set_height( ui_ACArc, 150);
lv_obj_set_x( ui_ACArc, 106 );
lv_obj_set_y( ui_ACArc, 70 );
lv_obj_set_align( ui_ACArc, LV_ALIGN_CENTER );
lv_obj_set_style_arc_color(ui_ACArc, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_ACArc, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_ACArc, 10, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_ACArc, lv_color_hex(0x1834AC), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_ACArc, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_ACArc, 10, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_ACArc, 10, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_ACArc, lv_color_hex(0x4A6983), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ACArc, 255, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Label10 = lv_label_create(ui_ThermostatScreen);
lv_obj_set_width( ui_Label10, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label10, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label10, -115 );
lv_obj_set_y( ui_Label10, -23 );
lv_obj_set_align( ui_Label10, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label10,"Temperature");

ui_TemperaturLable = lv_label_create(ui_ThermostatScreen);
lv_obj_set_width( ui_TemperaturLable, 45);
lv_obj_set_height( ui_TemperaturLable, LV_SIZE_CONTENT);   /// 20
lv_obj_set_x( ui_TemperaturLable, -112 );
lv_obj_set_y( ui_TemperaturLable, 2 );
lv_obj_set_align( ui_TemperaturLable, LV_ALIGN_CENTER );
lv_label_set_text(ui_TemperaturLable,"18 C");
lv_obj_set_style_text_align(ui_TemperaturLable, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_TemperaturLable, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_TemperaturLable, lv_color_hex(0xB5DDFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TemperaturLable, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_TemperaturLable, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_TemperaturLable, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_TemperaturLable, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_CelsiusButton = lv_btn_create(ui_ThermostatScreen);
lv_obj_set_width( ui_CelsiusButton, 45);
lv_obj_set_height( ui_CelsiusButton, 21);
lv_obj_set_x( ui_CelsiusButton, -150 );
lv_obj_set_y( ui_CelsiusButton, 30 );
lv_obj_set_align( ui_CelsiusButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_CelsiusButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_CelsiusButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_CelsiusButton, lv_color_hex(0x1834AC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_CelsiusButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label14 = lv_label_create(ui_CelsiusButton);
lv_obj_set_width( ui_Label14, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label14, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label14, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label14,"C");
lv_obj_set_style_text_color(ui_Label14, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label14, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_FahrenheitButton = lv_btn_create(ui_ThermostatScreen);
lv_obj_set_width( ui_FahrenheitButton, 45);
lv_obj_set_height( ui_FahrenheitButton, 21);
lv_obj_set_x( ui_FahrenheitButton, -81 );
lv_obj_set_y( ui_FahrenheitButton, 30 );
lv_obj_set_align( ui_FahrenheitButton, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_FahrenheitButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_FahrenheitButton, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_FahrenheitButton, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_FahrenheitButton, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label15 = lv_label_create(ui_FahrenheitButton);
lv_obj_set_width( ui_Label15, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label15, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_Label15, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label15,"F");
lv_obj_set_style_text_color(ui_Label15, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label15, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label16 = lv_label_create(ui_ThermostatScreen);
lv_obj_set_width( ui_Label16, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label16, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label16, -114 );
lv_obj_set_y( ui_Label16, 67 );
lv_obj_set_align( ui_Label16, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label16,"Humedity");

ui_HumedityLable = lv_label_create(ui_ThermostatScreen);
lv_obj_set_width( ui_HumedityLable, 45);
lv_obj_set_height( ui_HumedityLable, LV_SIZE_CONTENT);   /// 20
lv_obj_set_x( ui_HumedityLable, -115 );
lv_obj_set_y( ui_HumedityLable, 96 );
lv_obj_set_align( ui_HumedityLable, LV_ALIGN_CENTER );
lv_label_set_text(ui_HumedityLable,"50 %");
lv_obj_set_style_text_align(ui_HumedityLable, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_HumedityLable, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_HumedityLable, lv_color_hex(0xB5DDFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_HumedityLable, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_HumedityLable, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_HumedityLable, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_HumedityLable, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_ACValueLable = lv_label_create(ui_ThermostatScreen);
lv_obj_set_width( ui_ACValueLable, 45);
lv_obj_set_height( ui_ACValueLable, LV_SIZE_CONTENT);   /// 20
lv_obj_set_x( ui_ACValueLable, 103 );
lv_obj_set_y( ui_ACValueLable, 71 );
lv_obj_set_align( ui_ACValueLable, LV_ALIGN_CENTER );
lv_label_set_text(ui_ACValueLable,"20 C");
lv_obj_set_style_text_align(ui_ACValueLable, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_ACValueLable, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_ACValueLable, lv_color_hex(0xB5DDFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_ACValueLable, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_ACValueLable, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_ACValueLable, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_ACValueLable, 1, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_add_event_cb(ui_Button4, ui_event_Button4, LV_EVENT_ALL, NULL);

}
