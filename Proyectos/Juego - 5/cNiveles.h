#pragma once
#include "cMapa.h"
class cNiveles
{
private:
	cMapa mapa;

public:
	cNiveles(int ancho, int alto);
	void Nivel_1();
	void Nivel_2();
	void Nivel_3();
	cMapa& getMapa();

};

