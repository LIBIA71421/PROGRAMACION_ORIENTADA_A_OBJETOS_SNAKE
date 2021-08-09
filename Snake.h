#ifndef SNAKE
#define SNAKE
#include "Body.h"
#include "Formato.h"
#include "Snv.h"
#include <iostream>
using  namespace std;

class Snake{
private:
	Body snake[100];
	Snv* snv;
	bool gameover;
public:
	Snake();
	void actualizar();
	void imprimir();
	void genSnake();
	void muerte();

	int getSnakeX(int xi);
	int getSnakeY(int yi);
	int getSnakeDX();
	int getSnakeDY();
	bool getGameOver();

	void setGameOver(bool game);
	void setSnakeDX(int dx);
	void setSnakeDY(int dy);
	void setSnakeCuerpo(int ci,char c);
};

#endif