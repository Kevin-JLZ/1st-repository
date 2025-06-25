#include "cEstrella.h"
#include <cstdlib> // Generar posición aleatoria
#include <ctime>

cEstrella::cEstrella(int x, int y, char simbolo, int cantidad) : cComida(x, y, simbolo, cantidad) {}

void cEstrella::dibujar(char** pantalla, int ancho, int alto) {
	if (y < 0 || x < 0 || pantalla[y][x] != ' ') {
		for (int i = 0; i < ancho * alto; i++) {
			int nuevoX = rand() % ancho;
			int nuevoY = rand() % alto;
			if (pantalla[nuevoY][nuevoX] == ' ') {
				x = nuevoX;
				y = nuevoY;
				break;
			}
		}
	}

	if (0<= x && x < ancho && 0 <= y && y < alto) {
		pantalla[y][x] = simbolo;
	}
}
void cEstrella::disminuir() {
	this->cantidad--;
}