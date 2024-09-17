// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.6
// Project name: M5mediaController

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void dropDownEntry_Animation(lv_obj_t * TargetObject, int delay);


// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
void ui_event_Screen1_imgPlayPauseIcon(lv_event_t * e);
lv_obj_t * ui_Screen1_imgPlayPauseIcon;
void ui_event_Screen1_imgPreviousIcon(lv_event_t * e);
lv_obj_t * ui_Screen1_imgPreviousIcon;
void ui_event_Screen1_imgForwardIcon(lv_event_t * e);
lv_obj_t * ui_Screen1_imgForwardIcon;
void ui_event_Screen1_imgVolumeIcon(lv_event_t * e);
lv_obj_t * ui_Screen1_imgVolumeIcon;
void ui_event_Screen1_imgBrightnessIcon(lv_event_t * e);
lv_obj_t * ui_Screen1_imgBrightnessIcon;
void ui_event_Screen1_SliderVolume(lv_event_t * e);
lv_obj_t * ui_Screen1_SliderVolume;
void ui_event_Screen1_SliderBrightness(lv_event_t * e);
lv_obj_t * ui_Screen1_SliderBrightness;
lv_obj_t * ui_Screen1_LabelVolume;
lv_obj_t * ui_Screen1_LabelBrightness;
lv_obj_t * ui_Screen1_playbackStatusBar;
lv_obj_t * ui_Screen1_currentPlayBackTime;
lv_obj_t * ui_Screen1_totalPlayBackTime1;
lv_obj_t * ui_Screen1_Image3;
lv_obj_t * ui_Screen1_LabelMusicTitle;
lv_obj_t * ui_Screen1_LabelArtistTitle;


// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
lv_obj_t * ui_Screen2;
void ui_event____initial_actions0(lv_event_t * e);
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_563203033[1] = {&ui_img_1783407615};
const lv_img_dsc_t * ui_imgset_volume_[1] = {&ui_img_volume_2_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void dropDownEntry_Animation(lv_obj_t * TargetObject, int delay)
{
    ui_anim_user_data_t * PropertyAnimation_0_user_data = lv_mem_alloc(sizeof(ui_anim_user_data_t));
    PropertyAnimation_0_user_data->target = TargetObject;
    PropertyAnimation_0_user_data->val = -1;
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 200);
    lv_anim_set_user_data(&PropertyAnimation_0, PropertyAnimation_0_user_data);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -30, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_in);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_deleted_cb(&PropertyAnimation_0, _ui_anim_callback_free_user_data);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1_imgPlayPauseIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        playBtnClicked_callback(e);
        _ui_image_set_property(ui_Screen1_imgPlayPauseIcon, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_bigpause_png);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_image_set_property(ui_Screen1_imgPlayPauseIcon, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_playpausebtn_png);
        pauseBtnClicked_callback(e);
    }
}
void ui_event_Screen1_imgPreviousIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        backBtnClicked_callback(e);
    }
}
void ui_event_Screen1_imgForwardIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        forwardBtnClicked_callback(e);
    }
}
void ui_event_Screen1_imgVolumeIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SHORT_CLICKED) {
        _ui_flag_modify(ui_Screen1_SliderVolume, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        _ui_flag_modify(ui_Screen1_LabelVolume, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        _ui_image_set_property(ui_Screen1_imgVolumeIcon, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_volume_2_png);
    }
    if(event_code == LV_EVENT_LONG_PRESSED) {
        _ui_image_set_property(ui_Screen1_imgVolumeIcon, _UI_IMAGE_PROPERTY_IMAGE, & ui_img_volume_x_png);
        _ui_slider_set_property(ui_Screen1_SliderVolume, _UI_SLIDER_PROPERTY_VALUE_WITH_ANIM, 0);
        _ui_label_set_property(ui_Screen1_LabelVolume, _UI_LABEL_PROPERTY_TEXT, "0");
        mute_callback(e);
    }
}
void ui_event_Screen1_imgBrightnessIcon(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Screen1_SliderBrightness, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        _ui_flag_modify(ui_Screen1_LabelBrightness, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
void ui_event_Screen1_SliderVolume(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_Screen1_LabelVolume, target, "", "");
        volLevelChanged_callback(e);
    }
    if(event_code == LV_EVENT_RELEASED) {
        _ui_flag_modify(ui_Screen1_SliderVolume, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
        _ui_flag_modify(ui_Screen1_LabelVolume, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
void ui_event_Screen1_SliderBrightness(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_slider_set_text_value(ui_Screen1_LabelBrightness, target, "", "");
        brightnessLvlChanged_callback(e);
    }
    if(event_code == LV_EVENT_RELEASED) {
        _ui_flag_modify(ui_Screen1_SliderBrightness, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Screen1_LabelBrightness, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event____initial_actions0(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        dropDownEntry_Animation(ui_Screen1, 0);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui_Screen2_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_obj_add_event_cb(ui____initial_actions0, ui_event____initial_actions0, LV_EVENT_ALL, NULL);

    lv_disp_load_scr(ui____initial_actions0);
    lv_disp_load_scr(ui_Screen1);
}
