#include <Arduino.h>
#include <../lib/alphabet.cpp>

const int pinKeyLeft = 3;
const int pinKeyRight = 2;
const int passLength = 7;
int currentPosition = 0;
boolean mode = true;
boolean forwards = true;

typedef union
{
  Symbol p[passLength];
} PASSWORD;
const PASSWORD password = {zero, one, two, three, four, five, six};

void getNextSymbol(PASSWORD pass)
{
  if (currentPosition < passLength)
  {
    if (!forwards)
    {
      currentPosition++;
    }
    getSymbol(pass.p[currentPosition]);
    currentPosition++;
    forwards = true;
  }
  else
  {
    getSymbol(end);
  }
}

void getPreviousSymbol(PASSWORD pass)
{
  if (currentPosition > 0)
  {
    if (forwards)
    {
      currentPosition--;
    }
    currentPosition--;
    getSymbol(pass.p[currentPosition]);
    forwards = false;
  }
  else
  {
    getSymbol(end);
  }
}
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
    getPreviousSymbol(password);
  }
  if (digitalRead(pinKeyRight) == LOW)
  {
    delay(300);
    getNextSymbol(password);
  }
}