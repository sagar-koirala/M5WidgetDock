#include <Arduino.h>
#include <M5Core2.h>
#include "lv_setup.h"
#include "ui/ui.h"
#include <BleKeyboard.h>

BleKeyboard bleKeyboard("Widget Dock", "Microsoft", 84);

void setup()
{
  M5.begin(); 
  lv_begin();  
  ui_init();
  bleKeyboard.begin();  
}

void loop()
{
  lv_handler();  
}

