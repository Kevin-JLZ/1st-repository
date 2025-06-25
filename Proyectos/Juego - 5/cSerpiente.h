#pragma once
#include "cEntidad.h"

class cSerpiente : public cEntidad
{
private:
	int** cuerpo;
	int longitudMax;
	int longitud;


public:
	cSerpiente(int x, int y, char simbolo);
	~cSerpiente();



	//void actualizar()
	void mover(int dx, int dy, int ancho, int alto, char** mapa, bool& muerte);
	void dibujar(char** pantalla, int ancho, int alto); //imprimir

	void crecer();
	bool estaVivo();

	int getLongitud();

	int getX();
	int getY();

};

