#include "cUva.h"
#include <cstdlib> // Generar posición aleatoria
#include <ctime>

cUva::cUva(int x, int y, char simbolo, int cantidad) : cComida(x, y, simbolo, cantidad) {}

void cUva::dibujar(char** pantalla, int ancho, int alto) {
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
	if (0 <= x && x < ancho && 0 <= y && y < alto) {
		pantalla[y][x] = simbolo;
	}
}
void cUva::disminuir() {
	this->cantidad--;
}