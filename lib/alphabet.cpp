#include <Arduino.h>

const int pin1 = 12;
const int pin2 = 11;
const int pin3 = 10;
const int pin4 = 9;
const int pin5 = 8;
const int pin6 = 7;
const int pin7 = 6;
const int pin8 = 5;

class Letter
{
public:
    bool pin1;
    bool pin2;
    bool pin3;
    bool pin4;
    bool pin5;
    bool pin6;
    bool pin7;
    bool pin8;
    Letter(bool onOff1,
           bool onOff2,
           bool onOff3,
           bool onOff4,
           bool onOff5,
           bool onOff6,
           bool onOff7,
           bool onOff8)
    {
        pin1 = onOff1;
        pin2 = onOff2;
        pin3 = onOff3;
        pin4 = onOff4;
        pin5 = onOff5;
        pin6 = onOff6;
        pin7 = onOff7;
        pin8 = onOff8;
    };
};

void getLetter(Letter letter)
{

    digitalWrite(pin1, letter.pin1);
    digitalWrite(pin2, letter.pin2);
    digitalWrite(pin3, letter.pin3);
    digitalWrite(pin4, letter.pin4);
    digitalWrite(pin5, letter.pin5);
    digitalWrite(pin6, letter.pin6);
    digitalWrite(pin7, letter.pin7);
    digitalWrite(pin8, letter.pin8);
}

Letter A = Letter(0, 1, 0, 0, 0, 0, 0, 1);
Letter B = Letter(0, 1, 0, 0, 0, 0, 1, 0);
Letter C = Letter(0, 1, 0, 0, 0, 0, 1, 1);
Letter D = Letter(0, 1, 0, 0, 0, 1, 0, 0);
Letter E = Letter(0, 1, 0, 0, 0, 1, 0, 1);
Letter F = Letter(0, 1, 0, 0, 0, 1, 1, 0);
Letter G = Letter(0, 1, 0, 0, 0, 1, 1, 1);
Letter H = Letter(0, 1, 0, 0, 1, 0, 0, 0);
Letter I = Letter(0, 1, 0, 0, 1, 0, 0, 1);
Letter J = Letter(0, 1, 0, 0, 1, 0, 1, 0);
Letter K = Letter(0, 1, 0, 0, 1, 0, 1, 1);
Letter L = Letter(0, 1, 0, 0, 1, 1, 0, 0);
Letter M = Letter(0, 1, 0, 0, 1, 1, 0, 1);
Letter N = Letter(0, 1, 0, 0, 1, 1, 1, 0);
Letter O = Letter(0, 1, 0, 0, 1, 1, 1, 1);
Letter P = Letter(0, 1, 0, 1, 0, 0, 0, 0);
Letter Q = Letter(0, 1, 0, 1, 0, 0, 0, 1);
Letter R = Letter(0, 1, 0, 1, 0, 0, 1, 0);
Letter S = Letter(0, 1, 0, 1, 0, 0, 1, 1);
Letter T = Letter(0, 1, 0, 1, 0, 1, 0, 0);
Letter U = Letter(0, 1, 0, 1, 0, 1, 0, 1);
Letter V = Letter(0, 1, 0, 1, 0, 1, 1, 0);