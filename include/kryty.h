#ifndef _KRYTY_H
#define _KRYTY_H

#include "wagon.h"

class Kryty : public Wagon
{
public:
	Kryty(double lad);
	~Kryty();

	void zaladuj(Ladunek* lista);
};

#endif //_KRYTY_H
