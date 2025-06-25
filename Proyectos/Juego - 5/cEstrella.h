#pragma once
#include "cComida.h"

class cEstrella : public cComida
{
public:
	cEstrella(int x, int y, char simbolo, int cantidad);
	void dibujar(char** pantalla, int ancho, int alto);
	void disminuir();
};

