#include <Arduino.h>
#include <../lib/alphabet.cpp>

const int pinKeyLeft = 3;
const int pinKeyRight = 2;
const int passLength = 7;
boolean mode = true;
int currentPosition = 0;

typedef union
{
  Letter a[passLength];
  struct
  {
    Letter letter1;
    Letter letter2;
    Letter letter3;
  } s;
} PASSWORD;

PASSWORD pass = {A, G, one, two, three, B, C};

void getNextLetter(PASSWORD p)
{
  if (currentPosition < passLength)
  {
    getLetter(p.a[currentPosition]);
    currentPosition++;
  }
  else
  {
    getLetter(end);
  }
}

void getPreviousLetter(PASSWORD p)
{
  if (currentPosition > 0)
  {
    getLetter(p.a[currentPosition]);
    currentPosition--;
  }
  else
  {
    getLetter(end);
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
    getNextLetter(pass);
  }
  if (digitalRead(pinKeyRight) == LOW)
  {
    delay(300);
    getPreviousLetter(pass);
  }
}