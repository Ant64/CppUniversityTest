#ifndef _WAGON_H
#define _WAGON_H

struct Ladunek;

class Wagon
{
public:
	Wagon(double lad);
	virtual ~Wagon();

	double okreslPorcje(double towary);
	void zajmij(double porcja);
	void wykonajZaladunek(double& towary);

	virtual void zaladuj(Ladunek* lista) = 0;

	double getLadownosc() const;
	double getZajete() const;

private:
	double ladownosc;
	double zajete;
};

#endif //_WAGON_H
