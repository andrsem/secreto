#include <Arduino.h>

const int pin1 = 12;
const int pin2 = 11;
const int pin3 = 10;
const int pin4 = 9;
const int pin5 = 8;
const int pin6 = 7;
const int pin7 = 6;
const int pin8 = 5;

class Symbol
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
    Symbol(bool onOff1,
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

void getSymbol(Symbol s)
{
    digitalWrite(pin1, s.pin1);
    digitalWrite(pin2, s.pin2);
    digitalWrite(pin3, s.pin3);
    digitalWrite(pin4, s.pin4);
    digitalWrite(pin5, s.pin5);
    digitalWrite(pin6, s.pin6);
    digitalWrite(pin7, s.pin7);
    digitalWrite(pin8, s.pin8);
}

Symbol A = Symbol(0, 1, 0, 0, 0, 0, 0, 1);
Symbol B = Symbol(0, 1, 0, 0, 0, 0, 1, 0);
Symbol C = Symbol(0, 1, 0, 0, 0, 0, 1, 1);
Symbol D = Symbol(0, 1, 0, 0, 0, 1, 0, 0);
Symbol E = Symbol(0, 1, 0, 0, 0, 1, 0, 1);
Symbol F = Symbol(0, 1, 0, 0, 0, 1, 1, 0);
Symbol G = Symbol(0, 1, 0, 0, 0, 1, 1, 1);
Symbol H = Symbol(0, 1, 0, 0, 1, 0, 0, 0);
Symbol I = Symbol(0, 1, 0, 0, 1, 0, 0, 1);
Symbol J = Symbol(0, 1, 0, 0, 1, 0, 1, 0);
Symbol K = Symbol(0, 1, 0, 0, 1, 0, 1, 1);
Symbol L = Symbol(0, 1, 0, 0, 1, 1, 0, 0);
Symbol M = Symbol(0, 1, 0, 0, 1, 1, 0, 1);
Symbol N = Symbol(0, 1, 0, 0, 1, 1, 1, 0);
Symbol O = Symbol(0, 1, 0, 0, 1, 1, 1, 1);
Symbol P = Symbol(0, 1, 0, 1, 0, 0, 0, 0);
Symbol Q = Symbol(0, 1, 0, 1, 0, 0, 0, 1);
Symbol R = Symbol(0, 1, 0, 1, 0, 0, 1, 0);
Symbol S = Symbol(0, 1, 0, 1, 0, 0, 1, 1);
Symbol T = Symbol(0, 1, 0, 1, 0, 1, 0, 0);
Symbol U = Symbol(0, 1, 0, 1, 0, 1, 0, 1);
Symbol V = Symbol(0, 1, 0, 1, 0, 1, 1, 0);
Symbol W = Symbol(0, 1, 0, 1, 0, 1, 1, 1);
Symbol X = Symbol(0, 1, 0, 1, 1, 0, 0, 0);
Symbol Y = Symbol(0, 1, 0, 1, 1, 0, 0, 1);
Symbol Z = Symbol(0, 1, 0, 1, 1, 0, 1, 0);

Symbol a = Symbol(0, 1, 1, 0, 0, 0, 0, 1);
Symbol b = Symbol(0, 1, 1, 0, 0, 0, 1, 0);
Symbol c = Symbol(0, 1, 1, 0, 0, 0, 1, 1);
Symbol d = Symbol(0, 1, 1, 0, 0, 1, 0, 0);
Symbol e = Symbol(0, 1, 1, 0, 0, 1, 0, 1);
Symbol f = Symbol(0, 1, 1, 0, 0, 1, 1, 0);
Symbol g = Symbol(0, 1, 1, 0, 0, 1, 1, 1);
Symbol h = Symbol(0, 1, 1, 0, 1, 0, 0, 0);
Symbol i = Symbol(0, 1, 1, 0, 1, 0, 0, 1);
Symbol j = Symbol(0, 1, 1, 0, 1, 0, 1, 0);
Symbol k = Symbol(0, 1, 1, 0, 1, 0, 1, 1);
Symbol l = Symbol(0, 1, 1, 0, 1, 1, 0, 0);
Symbol m = Symbol(0, 1, 1, 0, 1, 1, 0, 1);
Symbol n = Symbol(0, 1, 1, 0, 1, 1, 1, 0);
Symbol o = Symbol(0, 1, 1, 0, 1, 1, 1, 1);
Symbol p = Symbol(0, 1, 1, 1, 0, 0, 0, 0);
Symbol q = Symbol(0, 1, 1, 1, 0, 0, 0, 1);
Symbol r = Symbol(0, 1, 1, 1, 0, 0, 1, 0);
Symbol s = Symbol(0, 1, 1, 1, 0, 0, 1, 1);
Symbol t = Symbol(0, 1, 1, 1, 0, 1, 0, 0);
Symbol u = Symbol(0, 1, 1, 1, 0, 1, 0, 1);
Symbol v = Symbol(0, 1, 1, 1, 0, 1, 1, 0);
Symbol w = Symbol(0, 1, 1, 1, 0, 1, 1, 1);
Symbol x = Symbol(0, 1, 1, 1, 1, 0, 0, 0);
Symbol y = Symbol(0, 1, 1, 1, 1, 0, 0, 1);
Symbol z = Symbol(0, 1, 1, 1, 1, 0, 1, 0);

Symbol zero = Symbol(0, 0, 0, 0, 0, 0, 0, 0);
Symbol one = Symbol(0, 0, 0, 0, 0, 0, 0, 1);
Symbol two = Symbol(0, 0, 0, 0, 0, 0, 1, 0);
Symbol three = Symbol(0, 0, 0, 0, 0, 0, 1, 1);
Symbol four = Symbol(0, 0, 0, 0, 0, 1, 0, 0);
Symbol five = Symbol(0, 0, 0, 0, 0, 1, 0, 1);
Symbol six = Symbol(0, 0, 0, 0, 0, 1, 1, 0);
Symbol seven = Symbol(0, 0, 0, 0, 0, 1, 1, 1);
Symbol eight = Symbol(0, 0, 0, 0, 1, 0, 0, 0);
Symbol nine = Symbol(0, 0, 0, 0, 1, 0, 0, 1);

Symbol end = Symbol(1, 1, 1, 1, 1, 1, 1, 1);
Symbol goBackwards = Symbol(1, 1, 1, 1, 0, 0, 0, 0);
Symbol goForwards = Symbol(0, 0, 0, 0, 1, 1, 1, 1);