#include "wagon.h"
#include "ladunek.h"

Wagon::Wagon(double lad) : ladownosc(lad), zajete(0.0)
{

}

Wagon::~Wagon()
{

}

double Wagon::okreslPorcje(double towary)
{

}

void Wagon::zajmij(double porcja)
{

}

void Wagon::wykonajZaladunek(double& towary)
{
	double wolne = ladownosc - zajete;
	if(towary > 0.0 && wolne > 0.0)
	{
		double ilosc = towary;
		if(wolne < ilosc)
			ilosc = wolne;
		towary -= ilosc;
		zajete += towary;
	}
}

double Wagon::getLadownosc() const
{
	return ladownosc;
}

double Wagon::getZajete() const
{
	return zajete;
}
