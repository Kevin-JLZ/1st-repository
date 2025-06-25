#pragma once
class cPuntaje
{
private:
	int puntos;
	int puntosMax;

public:
	cPuntaje(int puntosMax);
	void reiniciar();
	void aumentar(int valor);
	int getPuntos();
};

