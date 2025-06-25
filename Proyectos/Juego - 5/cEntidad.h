#pragma once
#include <iostream>
class cEntidad
{
protected:
	int x, y;
	char simbolo;
	int vivo;

public:
	cEntidad();
	cEntidad(int x, int y, char simbolo);
	virtual void dibujar(char** pantalla, int ancho, int alto) = 0;
};

