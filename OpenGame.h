#ifndef OPEN_GAME
#define OPEN_GAME

#include "Portada.h"
class OpenGame :    public Portada{
private:
	int c, f, r;
	char t;
public:
	OpenGame();
	void text();
	void portada();
};

#endif