#ifndef _POCIAG_H
#define _POCIAG_H

#include <vector>

struct Ladunek;
class Wagon;

class Pociag
{
public:
	Pociag();
	~Pociag();

	void dodajWagon(Wagon* wagon);
	void zaladuj(Ladunek* lista);
	void zestawienie(Ladunek* lista);

private:
	std::vector<Wagon*> wagony;
};

#endif //_POCIAG_H
