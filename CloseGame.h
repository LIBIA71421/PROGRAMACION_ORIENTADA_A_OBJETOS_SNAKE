#ifndef CLOSE_PORTADA
#define CLOSE_PORTADA
#include "Snv.h"
#include "Portada.h"
class CloseGame :    public Portada{
private:
	Snv* snv;
	int c, f;
	char t;
	char key; 
	int  r;
public:
	CloseGame(Snv* snv);
	void text();
	void muerte2();
};

#endif