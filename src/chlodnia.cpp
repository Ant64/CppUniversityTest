#include "chlodnia.h"
#include "ladunek.h"

Chlodnia::Chlodnia(double lad) : Wagon(lad)
{

}

Chlodnia::~Chlodnia()
{

}

void Chlodnia::zaladuj(Ladunek* lista)
{

	wykonajZaladunek(lista->chlodnicze);
}
