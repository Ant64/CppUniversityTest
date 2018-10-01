#ifndef _CHLODNIA_H
#define _CHLODNIA_H

#include "wagon.h"

class Chlodnia : public Wagon
{
public:
	Chlodnia(double lad);
	~Chlodnia();

	void zaladuj(Ladunek* lista);
};


#endif //_CHLODNIA_H
