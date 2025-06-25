#pragma once
#include "cEntidad.h"
class cComida : public cEntidad
{
protected:
	int cantidad;
public:
	cComida(int x, int y, char simbolo, int cantidad);
	virtual void dibujar(char** pantalla, int ancho, int alto) = 0;
	int getCantidad();
};

