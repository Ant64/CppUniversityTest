#include "cysterna.h"
#include "ladunek.h"

Cysterna::Cysterna(double lad) : Wagon(lad)
{

}

Cysterna::~Cysterna()
{

}

void Cysterna::zaladuj(Ladunek* lista)
{
	wykonajZaladunek(lista->plynne);
}
