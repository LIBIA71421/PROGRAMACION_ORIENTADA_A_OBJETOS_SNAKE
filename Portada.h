#ifndef PORTADA
#define PORTADA
#include <conio.h>
#include <iostream>
#include "Formato.h"
#include "Snv.h"
using namespace std;

class Portada{
private:
	Snv snv;
	char t;
	int xg;
public:
	Portada();
	virtual void graficaTablero();
	virtual void grafico();
	virtual void text();
	virtual void setX(int xo);
	void tablero();
	void puntos();
};

#endif