#ifndef FRUTA
#define FRUTA
#include "Formato.h"
#include "Snv.h"
#include "Body.h"
#include <time.h>
#include <iostream>
using namespace std;

class Fruta {
private:
    Snv* snv;
public:
    Fruta(Snv* snv);
    int x, y;
    char cuerpo = 254;
    void genFruta();
    void mFruta();
    bool cFruta(int snakeX, int snakeY);
};
#endif