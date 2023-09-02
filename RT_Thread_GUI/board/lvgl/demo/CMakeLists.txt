SET(SOURCES screens/ui_LightScreen.c
    screens/ui_ThermostatScreen.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c)

add_library(ui ${SOURCES})
