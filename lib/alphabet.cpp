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
Letter W = Letter(0, 1, 0, 1, 0, 1, 1, 1);
Letter X = Letter(0, 1, 0, 1, 1, 0, 0, 0);
Letter Y = Letter(0, 1, 0, 1, 1, 0, 0, 1);
Letter Z = Letter(0, 1, 0, 1, 1, 0, 1, 0);

Letter a = Letter(0, 1, 1, 0, 0, 0, 0, 1);
Letter b = Letter(0, 1, 1, 0, 0, 0, 1, 0);
Letter c = Letter(0, 1, 1, 0, 0, 0, 1, 1);
Letter d = Letter(0, 1, 1, 0, 0, 1, 0, 0);
Letter e = Letter(0, 1, 1, 0, 0, 1, 0, 1);
Letter f = Letter(0, 1, 1, 0, 0, 1, 1, 0);
Letter g = Letter(0, 1, 1, 0, 0, 1, 1, 1);
Letter h = Letter(0, 1, 1, 0, 1, 0, 0, 0);
Letter i = Letter(0, 1, 1, 0, 1, 0, 0, 1);
Letter j = Letter(0, 1, 1, 0, 1, 0, 1, 0);
Letter k = Letter(0, 1, 1, 0, 1, 0, 1, 1);
Letter l = Letter(0, 1, 1, 0, 1, 1, 0, 0);
Letter m = Letter(0, 1, 1, 0, 1, 1, 0, 1);
Letter n = Letter(0, 1, 1, 0, 1, 1, 1, 0);
Letter o = Letter(0, 1, 1, 0, 1, 1, 1, 1);
Letter p = Letter(0, 1, 1, 1, 0, 0, 0, 0);
Letter q = Letter(0, 1, 1, 1, 0, 0, 0, 1);
Letter r = Letter(0, 1, 1, 1, 0, 0, 1, 0);
Letter s = Letter(0, 1, 1, 1, 0, 0, 1, 1);
Letter t = Letter(0, 1, 1, 1, 0, 1, 0, 0);
Letter u = Letter(0, 1, 1, 1, 0, 1, 0, 1);
Letter v = Letter(0, 1, 1, 1, 0, 1, 1, 0);
Letter w = Letter(0, 1, 1, 1, 0, 1, 1, 1);
Letter x = Letter(0, 1, 1, 1, 1, 0, 0, 0);
Letter y = Letter(0, 1, 1, 1, 1, 0, 0, 1);
Letter z = Letter(0, 1, 1, 1, 1, 0, 1, 0);

Letter zero = Letter(0, 0, 0, 0, 0, 0, 0, 0);
Letter one = Letter(0, 0, 0, 0, 0, 0, 0, 1);
Letter two = Letter(0, 0, 0, 0, 0, 0, 1, 0);
Letter three = Letter(0, 0, 0, 0, 0, 0, 1, 1);
Letter four = Letter(0, 0, 0, 0, 0, 1, 0, 0);
Letter five = Letter(0, 0, 0, 0, 0, 1, 0, 1);
Letter six = Letter(0, 0, 0, 0, 0, 1, 1, 0);
Letter seven = Letter(0, 0, 0, 0, 0, 1, 1, 1);
Letter eight = Letter(0, 0, 0, 0, 1, 0, 0, 0);
Letter nine = Letter(0, 0, 0, 0, 1, 0, 0, 1);

Letter end = Letter(1, 1, 1, 1, 1, 1, 1, 1);