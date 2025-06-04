/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

// Set LED_BUILTIN if it is not defined by Arduino framework
#define SOUND 13

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(SOUND, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(SOUND, HIGH);
  // wait for a second
  delayMicroseconds(5);
  // turn the LED off by making the voltage LOW
  digitalWrite(SOUND, LOW);
   // wait for a second
  delayMicroseconds(5);
}