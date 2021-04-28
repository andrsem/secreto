#include <Arduino.h>

const int pin1 = 12;
const int pin2 = 11;
const int pin3 = 10;
const int pin4 = 9;
const int pin5 = 8;
const int pin6 = 7;
const int pin7 = 6;
const int pin8 = 5;
const int pinKeyLeft = 3;
const int pinKeyRight = 2;
boolean mode = true;

void setup()
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pinKeyLeft, INPUT_PULLUP);
  pinMode(pinKeyRight, INPUT_PULLUP);
}

void loop()
{
  if (digitalRead(pinKeyLeft) == LOW)
  {
    delay(300);
    mode = !mode;
  }
  digitalWrite(pin1, mode);
  digitalWrite(pin2, mode);
  digitalWrite(pin3, mode);
  digitalWrite(pin4, mode);
  digitalWrite(pin5, mode);
  digitalWrite(pin6, mode);
  digitalWrite(pin7, mode);
  digitalWrite(pin8, mode);
}