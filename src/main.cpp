#include <Arduino.h>
#include <../lib/alphabet.cpp>

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
    getLetter(B);
  }
  if (digitalRead(pinKeyRight) == LOW)
  {
    delay(300);
    getLetter(A);
  }
}