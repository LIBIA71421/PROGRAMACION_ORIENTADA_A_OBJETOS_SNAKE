#ifndef GAME
#define GAME

#include <conio.h>
#include "Body.h"
#include "Fruta.h"
#include "CloseGame.h"
#include "OpenGame.h"
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include "Snv.h"
#include "Snake.h"

class Game {
public:
    Game();
    void main();
private:
    int i;
    char key;
    Snv* snv ;
    Snake* snake;
    Fruta* fruta;
    CloseGame* close;
    OpenGame* open;

    void loop();
    void tecla();
};
#endif 
