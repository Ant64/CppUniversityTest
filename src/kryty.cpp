#include "kryty.h"
#include "ladunek.h"

Kryty::Kryty(double lad) : Wagon(lad)
{

}

Kryty::~Kryty()
{

}

void Kryty::zaladuj(Ladunek* lista)
{
	wykonajZaladunek(lista->drobnicowe);
}
