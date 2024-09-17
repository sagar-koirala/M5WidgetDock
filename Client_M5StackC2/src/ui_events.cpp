#include "UI/ui.h"
#include "Arduino.h"
#include <BleKeyboard.h>

extern BleKeyboard bleKeyboard;
uint8_t volumeLevel = 0;
uint8_t brightnessLevel = 0;

void playBtnClicked_callback(lv_event_t * e)
{
	bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
	bleKeyboard.release(KEY_MEDIA_PLAY_PAUSE);
	// Serial.println("Play");
}
void pauseBtnClicked_callback(lv_event_t * e)
{
	bleKeyboard.write(KEY_MEDIA_PLAY_PAUSE);
	bleKeyboard.release(KEY_MEDIA_PLAY_PAUSE);
}
void backBtnClicked_callback(lv_event_t * e)
{
	bleKeyboard.write(KEY_MEDIA_PREVIOUS_TRACK);
	bleKeyboard.release(KEY_MEDIA_PREVIOUS_TRACK);
}
void forwardBtnClicked_callback(lv_event_t * e)
{
	bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
	bleKeyboard.release(KEY_MEDIA_NEXT_TRACK);
}
void mute_callback(lv_event_t * e)
{
	bleKeyboard.write(KEY_MEDIA_MUTE);
	bleKeyboard.release(KEY_MEDIA_MUTE);
}
void volLevelChanged_callback(lv_event_t * e)
{
	if(lv_slider_get_value(ui_Screen1_SliderVolume) - volumeLevel < 0){
		bleKeyboard.write(KEY_MEDIA_VOLUME_DOWN);
		bleKeyboard.release(KEY_MEDIA_VOLUME_DOWN);
		}
	else{
		bleKeyboard.write(KEY_MEDIA_VOLUME_UP);
		bleKeyboard.release(KEY_MEDIA_VOLUME_UP);
	} 
	volumeLevel = lv_slider_get_value(ui_Screen1_SliderVolume);
}
void brightnessLvlChanged_callback(lv_event_t * e)
{
	// bleKeyboard.write(KEY_MEDIA_NEXT_TRACK);
	// bleKeyboard.releaseAll();
	Serial.println(lv_slider_get_value(ui_Screen1_SliderBrightness));
}

