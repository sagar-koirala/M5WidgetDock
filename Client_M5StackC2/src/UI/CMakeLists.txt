SET(SOURCES screens/ui_Screen1.c
    screens/ui_Screen2.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_playpausebtn_png.c
    images/ui_img_bigpause_png.c
    images/ui_img_skip_previous_filled_png.c
    images/ui_img_1783407615.c
    images/ui_img_volume_2_png.c
    images/ui_img_volume_x_png.c
    images/ui_img_light_mode_png.c
    images/ui_img_media_png.c)

add_library(ui ${SOURCES})
