#include "cSerpiente.h"

cSerpiente::cSerpiente(int x, int y, char simbolo) : cEntidad(x, y, simbolo), longitud(1), longitudMax(100) {
	//Crear serpiente
	cuerpo = new int* [longitudMax];
	for (int i = 0; i < longitudMax; i++) {
		cuerpo[i] = new int[2];
	}
	//Posicion de la cabeza
	cuerpo[0][0] = x;
	cuerpo[0][1] = y;
}

cSerpiente::~cSerpiente() {
	for (int i = 0; i < longitudMax; i++) {
		delete[] cuerpo[i];
	}
	delete[] cuerpo;
}
void cSerpiente::mover(int dx, int dy, int ancho, int alto, char** mapa, bool& muerte) {
	int nuevoX = cuerpo[0][0] + dx;
	int nuevoY = cuerpo[0][1] + dy;

	if (0 < nuevoX && nuevoX <= ancho && 0 < nuevoY && nuevoY <= alto) {
		int fila = alto - nuevoY;
		int col = nuevoX - 1;

		// Verifica colisión con pared '#' o cuerpo 'o'
		if (mapa[fila][col] == '#' || mapa[fila][col] == 'o') {
			muerte = true;
			return;
		}

		// Mover cuerpo
		for (int i = longitud - 1; i > 0; i--) {
			cuerpo[i][0] = cuerpo[i - 1][0];
			cuerpo[i][1] = cuerpo[i - 1][1];
		}

		// Mover cabeza
		cuerpo[0][0] = nuevoX;
		cuerpo[0][1] = nuevoY;
	}
	else {
		muerte = true;
	}
}

void cSerpiente::dibujar(char** pantalla, int ancho, int alto) {
	for (int i = 0; i < longitud; i++) {
		int columna = cuerpo[i][0] - 1;
		int fila = alto - cuerpo[i][1];
		if (0 <= columna && columna < ancho && 0 <= fila && fila < alto) {
			pantalla[fila][columna] = (i == 0) ? simbolo : 'o';
		}
	}
}
void cSerpiente::crecer() {
	if (longitud < longitudMax) {
		longitud++;
	}
}
bool cSerpiente::estaVivo() {
	return vivo;
}
int cSerpiente::getLongitud() {
	return longitud;
}

int cSerpiente::getX() {
	return cuerpo[0][0];
}

int cSerpiente::getY() {
	return cuerpo[0][1];
}