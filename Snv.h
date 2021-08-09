#ifndef SNV
#define SNV
#include "Formato.h"
#include <iostream>
using namespace std;

class Snv{
private:
	int score, nivel, velocidad;
	int tam;
	int c, f;
public:
	Snv();
	int getScore();
	int getNivel();
	int getVelocidad();
	int getTam();
	int getC();
	int getF();

	void setScore(int s);
	void setNivel(int n);
	void setVelocidad(int v);
	void setTam(int ta);

	void puntos();
};
#endif