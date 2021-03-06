#ifndef ARDUINO_LED_LED_ARDUINO_UNO_H
#define ARDUINO_LED_LED_ARDUINO_UNO_H

#include <Arduino.h>
#include "TL_Config.h"

class Internal_LED
{

private:
  int state;
  const static int ledPin = 13;

public:
  Internal_LED();
  void toggle();
  void turnOn();
  void turnOff();
};

extern Internal_LED TL_LED;

#endif
