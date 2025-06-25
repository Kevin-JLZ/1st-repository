#include "cPuntaje.h"

cPuntaje::cPuntaje(int puntosMax) {
	puntos = 0;
	this->puntosMax = puntosMax;
}
void cPuntaje::reiniciar() {
	puntos = 0;
}
void cPuntaje::aumentar(int valor) {
	puntos += valor;
}
int cPuntaje::getPuntos() {
	return puntos;
}