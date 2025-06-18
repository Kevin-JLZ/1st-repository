#pragma once
#include "cMapa.h"
#include <iostream>

class cNivel
{
private:
	cMapa mapa;
	int puntaje;

public:
	cNivel();
	cNivel(int altoMapa, int anchoMapa, int puntaje);
	~cNivel();

	void Nivel_1();
	void PrintNivel();
};

