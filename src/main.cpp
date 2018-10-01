#include <iostream>
#include "pociag.h"
#include "chlodnia.h"
#include "cysterna.h"
#include "kryty.h"
#include "ladunek.h"

using namespace std;

int main() {
    cout << "Wagony" << endl;

	Pociag pociag;
	pociag.dodajWagon(new Chlodnia(4.6));
	pociag.dodajWagon(new Cysterna(3.3));
	pociag.dodajWagon(new Kryty(8.9));

	Ladunek ladunek;
	ladunek.chlodnicze = 3.5;
	ladunek.drobnicowe = 6.6;
	ladunek.jednostkowe = 9.9;
	ladunek.plynne = 7.7;
	ladunek.sypkie = 9.5;

	pociag.zaladuj(&ladunek);
	pociag.zestawienie(&ladunek);

    return 0;
}
