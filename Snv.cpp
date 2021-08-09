#include "Snv.h"

Snv::Snv() {
    score = 1;
    velocidad = 110;
    nivel = 1;
    tam = 4;
    c = 21;
    f = 64;
}

int Snv::getScore() {   
    return score;
}
int Snv::getNivel() {    
    return nivel;
}
int Snv::getVelocidad() {    
    return velocidad;
}
int Snv::getTam() {   
    return tam;
}
int Snv::getC() {    
    return c;
}
int Snv::getF() {    
    return f;
}

void Snv::setScore(int s) {    
    score = s;
}
void Snv::setNivel(int n) {    
    nivel = n;
}
void Snv::setVelocidad(int v) {    
    velocidad = v;
}
void Snv::setTam(int ta) {    
    tam = ta;
}

void Snv::puntos() {
    gotoxy(f + 2, 2);
    cout << "Score: " << (score - 1) * 10;
    gotoxy(f + 2, 4);
    cout << "Level: " << nivel;
    gotoxy(f + 2, 6);
    cout << "Length: " << tam;
}