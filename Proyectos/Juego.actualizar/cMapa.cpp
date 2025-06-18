#include "cMapa.h"

cMapa::cMapa() {
	alto = -1;
	ancho = -1;
	matriz = nullptr;
}
cMapa::cMapa(int alto, int ancho) : matriz(nullptr)
{
	this->alto = alto;
	this->ancho = ancho;
	matriz = new char* [alto];
	for (int i = 0; i < alto; i++) {
		matriz[i] = new char[ancho];
		for (int j = 0; j < ancho; j++) {
			matriz[i][j] = ' ';
		}
	}
}

cMapa::~cMapa() {
	for (int i = 0; i < alto; i++) {
		delete[] matriz[i];
	}
	delete[] matriz;
}
void cMapa::colocarBloque(int x, int y) {
	if ((0 < x && x <= ancho) && (0 < y && y <= alto)) {
		matriz[alto - y][x - 1] = '#';
	}
}

void cMapa::setAlto(int alto) {
	this->alto = alto;
}
void cMapa::setAncho(int ancho) {
	this->ancho = ancho;
}

int cMapa::getAlto() {
	return alto;
}
int cMapa::getAncho() {
	return ancho;
}
char** cMapa::getMatriz() {
	return matriz;
}

