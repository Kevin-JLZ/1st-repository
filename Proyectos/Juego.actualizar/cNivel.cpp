#include "cNivel.h"

cNivel::cNivel() : mapa(25, 25)
{
	puntaje = -1;
}
cNivel::cNivel(int altoMapa, int anchoMapa, int puntaje) : mapa(altoMapa, anchoMapa)
{
	this->puntaje = puntaje;
}
cNivel::~cNivel() {

}

void cNivel::Nivel_1() {
	//Suelo
	for (int i = 0; i < mapa.getAncho(); i++) {mapa.colocarBloque(i, 1);}
	mapa.colocarBloque(11, 2);
	mapa.colocarBloque(12, 2);
	mapa.colocarBloque(12, 3);
	mapa.colocarBloque(13, 3);
	for (int i = 0; i < 10; i++) {mapa.colocarBloque(13 + i, 4);}
	mapa.colocarBloque(23, 4);
	mapa.colocarBloque(24, 4);
	mapa.colocarBloque(24, 5);
	mapa.colocarBloque(25, 5);
	mapa.colocarBloque(22, 7);
	mapa.colocarBloque(21, 7);
	mapa.colocarBloque(19, 7);
	mapa.colocarBloque(18, 7);
	mapa.colocarBloque(17, 7);
	mapa.colocarBloque(17, 8);
	mapa.colocarBloque(15, 9);
	mapa.colocarBloque(14, 9);
	mapa.colocarBloque(13, 9);
	mapa.colocarBloque(12, 9);
	mapa.colocarBloque(11, 9);
	mapa.colocarBloque(9, 10);
	mapa.colocarBloque(8, 11);
	mapa.colocarBloque(7, 12);
	mapa.colocarBloque(9, 13);
	mapa.colocarBloque(10, 14);
	for (int i = 0; i < 5; i++) { mapa.colocarBloque(10 + i, 14); }
	mapa.colocarBloque(15, 15);
	mapa.colocarBloque(16, 16);
	mapa.colocarBloque(18, 17);
	mapa.colocarBloque(19, 18);
	mapa.colocarBloque(17, 19);
	mapa.colocarBloque(16, 20);
	for (int i = 0; i < 8; i++) { mapa.colocarBloque(18 + i, 21); }
	for (int i = 0; i < 3; i++) { mapa.colocarBloque(23 + i, 22); }

}

void cNivel::PrintNivel() {
	for (int i = 0; i < mapa.getAlto(); i++) {
		for (int j = 0; j < mapa.getAncho(); j++) {
			std::cout << mapa.getMatriz()[i][j];
		}
		std::cout << std::endl;
	}
}