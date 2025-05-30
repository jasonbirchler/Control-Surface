/**
 * An int literal as argument or constants like LED_BUILTIN should not result
 * in ambiguous overload selection.
 * 
 * @boards  AVR, AVR USB, Nano Every, Nano 33 IoT, Nano 33 BLE, UNO R4, Pi Pico, Teensy 3.x, ESP8266, ESP32
 */

#include <Arduino_Helpers.h>

#include <AH/Hardware/ExtendedInputOutput/ExtendedIOElement.hpp>

void setup() {
  using namespace ExtIO;
  pinMode(13, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  pinMode(13, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}