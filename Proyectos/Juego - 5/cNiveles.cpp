#include "cNiveles.h"

cNiveles::cNiveles(int alto, int ancho) : mapa(alto, ancho) {}

void cNiveles::Nivel_1() {
	// Bordes del mapa
	for (int i = 1; i <= mapa.getAlto(); i++) { 
		mapa.colocarBloque(1, i); 
		mapa.colocarBloque(25, i);
	}
	for (int i = 1; i <= mapa.getAncho(); i++) {
		mapa.colocarBloque(i, 1);
		mapa.colocarBloque(i, 25);
	}

	// Contruccion del nivel
	for (int i = 1; i <= 7; i++) {
		mapa.colocarBloque(i + 4, 5);
		mapa.colocarBloque(5, i + 4);

		mapa.colocarBloque(i + 4, 21);
		mapa.colocarBloque(5, i + 14);

		mapa.colocarBloque(i + 14, 21);
		mapa.colocarBloque(21, i + 14);

		mapa.colocarBloque(i + 14, 5);
		mapa.colocarBloque(21, i + 4);
	}
}

void cNiveles::Nivel_2() {
	// Bordes del mapa
	for (int i = 1; i <= mapa.getAlto(); i++) {
		mapa.colocarBloque(1, i);
		mapa.colocarBloque(25, i);
	}
	for (int i = 1; i <= mapa.getAncho(); i++) {
		mapa.colocarBloque(i, 1);
		mapa.colocarBloque(i, 25);
	}

	// Contruccion del nivel
	for (int i = 1; i <= 10; i++) {
		mapa.colocarBloque(13, i);
		mapa.colocarBloque(13, i + 15);
		mapa.colocarBloque(i, 13);
		mapa.colocarBloque(i + 15, 13);
	}

	for (int i = 1; i <= 7; i++) {
		mapa.colocarBloque(i + 4, 5);
		mapa.colocarBloque(5, i + 4);

		mapa.colocarBloque(i + 4, 21);
		mapa.colocarBloque(5, i + 14);

		mapa.colocarBloque(i + 14, 21);
		mapa.colocarBloque(21, i + 14);

		mapa.colocarBloque(i + 14, 5);
		mapa.colocarBloque(21, i + 4);
	}
}

void cNiveles::Nivel_3() {
	// Bordes del mapa
	for (int i = 1; i <= mapa.getAlto(); i++) {
		mapa.colocarBloque(1, i);
		mapa.colocarBloque(25, i);
	}
	for (int i = 1; i <= mapa.getAncho(); i++) {
		mapa.colocarBloque(i, 1);
		mapa.colocarBloque(i, 25);
	}
	// Construccion del mapa
	for (int i = 4; i <= 17; i++) {
		mapa.colocarBloque(i, 22);
	}
	mapa.colocarBloque(22, 21);
	mapa.colocarBloque(22, 22);
	mapa.colocarBloque(21, 22);
	for (int i = 9; i <= 20; i++) {
		mapa.colocarBloque(4, i);
	}
	for (int i = 16; i <= 19; i++) {
		mapa.colocarBloque(7, i);
	}
	for (int i = 1; i <= 10; i++) {
		mapa.colocarBloque(12, i);
		mapa.colocarBloque(i + 15, 13);
		mapa.colocarBloque(i, 13);
	}
	for (int i = 18; i <= 20; i++) {
		mapa.colocarBloque(12, i);
	}
	for (int i = 13; i <= 16; i++) {
		mapa.colocarBloque(12, i);
	}
	for (int i = 5; i <= 12; i++) {
		mapa.colocarBloque(7, i);
	}
	for (int i = 15; i <= 20; i++) {
		mapa.colocarBloque(i, 19);
	}
	mapa.colocarBloque(15, 17);
	mapa.colocarBloque(15, 18);
	mapa.colocarBloque(10, 8);
	mapa.colocarBloque(10, 9);
}

cMapa& cNiveles::getMapa() {
	return mapa;
}