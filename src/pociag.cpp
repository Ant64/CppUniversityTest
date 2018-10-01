#include "pociag.h"
#include "wagon.h"
#include "chlodnia.h"
#include "cysterna.h"
#include "kryty.h"
#include "odkryty.h"
#include "platforma.h"
#include "ladunek.h"
#include <iostream>

Pociag::Pociag()
{

}

Pociag::~Pociag()
{
	for(int i = 0; i < wagony.size(); ++i)
		delete wagony[i];
}

void Pociag::dodajWagon(Wagon* wagon)
{
	wagony.push_back(wagon);
}

void Pociag::zaladuj(Ladunek* lista)
{
	for(int i = 0; i < wagony.size(); ++i)
		wagony[i]->zaladuj(lista);
}

void Pociag::zestawienie(Ladunek* lista)
{
	double ladownosc = 0.0;
	double zaladowowano = 0.0;

	for(int i = 0; i < wagony.size(); ++i)
	{
		ladownosc += wagony[i]->getLadownosc();
		zaladowowano += wagony[i]->getZajete();
	}

	std::cout << "ladownosc: " << ladownosc << std::endl;
	std::cout << "zaladowano: " << zaladowowano << std::endl;

	double pozostalo = lista->sypkie + lista->drobnicowe + lista->chlodnicze + lista->jednostkowe + lista->plynne;
	std::cout << "pozostalo:" << pozostalo << std::endl;
}
