#pragma once
#include "cNiveles.h"
#include "cSerpiente.h"
#include "cMapa.h"
#include "cEstrella.h"
#include "cUva.h"
#include "cPuntaje.h"
#include <iostream>
#include <conio.h> // Para _getch() en Windows


class cMotorJuego
{
private:
	cNiveles nivel;
	cSerpiente* snake;
	cEstrella* estrella;
	cUva* uva;
	cPuntaje* puntaje;
	int nivelActual;

public:
	cMotorJuego(int ancho, int alto);
	~cMotorJuego();
	void cargarNivel(int n);
	void PrintNivel();
	void LoopDeJuego();
};

