#ifndef _CYSTERNA_H
#define _CYSTERNA_H

#include "wagon.h"

class Cysterna : public Wagon
{
public:
	Cysterna(double lad);
	~Cysterna();

	void zaladuj(Ladunek* lista);
};

#endif //_CYSTERNA_H
