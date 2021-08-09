#include "Fruta.h"

Fruta::Fruta(Snv* snv) {
    this->snv = snv;
}

void Fruta::genFruta() {
    x = 2 + (rand() % (snv->getF() - 2));
    y = 2 + (rand() % (snv->getC() - 2));
}
void Fruta::mFruta() {
    gotoxy(x, y);
    cout << cuerpo;
}
bool Fruta::cFruta(int snakeX, int snakeY) {
    mFruta();
    if (snakeX == x && snakeY == y) {
        genFruta();
        snv->setTam(snv->getTam() + 1);
        snv->setScore(snv->getScore() + 1);
        if (snv->getTam() % 10 == 0) {
            snv->setNivel(snv->getNivel() + 1);
            snv->setVelocidad(snv->getVelocidad() - 20);
        }
        return true;
    }
    return false;
}