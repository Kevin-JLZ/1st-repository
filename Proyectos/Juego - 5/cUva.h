#pragma once
#include "cComida.h"

class cUva : public cComida
{
public:
	cUva(int x, int y, char simbolo, int cantidad);
	void dibujar(char** pantalla, int ancho, int alto);
	void disminuir();
};

