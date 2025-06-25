#include "cMotorJuego.h"

cMotorJuego::cMotorJuego(int alto, int ancho) : nivel(alto, ancho), snake(nullptr), estrella(nullptr), uva(nullptr) {
	snake = new cSerpiente(3, 3, 'O');
	estrella = new cEstrella(2, 2, '*', 3);
	uva = new cUva(4, 4, '.', 30);
	nivel.Nivel_1();
	nivelActual = 1;
	cargarNivel(nivelActual);
	puntaje = new cPuntaje(15);
	uva->dibujar(nivel.getMapa().getMatriz(), nivel.getMapa().getAncho(), nivel.getMapa().getAlto());

}

cMotorJuego::~cMotorJuego() {
	delete snake;
	delete estrella;
	delete uva;
}

void cMotorJuego::cargarNivel(int n) {
	switch (n) {
	case 1:
		nivel.Nivel_1();
		break;
	case 2:
		nivel.Nivel_2();
		break;
	case 3:
		nivel.Nivel_3();
		break;
	default:
		std::cout << "Ganaste" << std::endl;
		break;
	}
}

void cMotorJuego::PrintNivel() {
	//Limpiar mapa
	for (int i = 0; i < nivel.getMapa().getAlto(); i++) {
		for (int j = 0; j < nivel.getMapa().getAncho(); j++) {
			if (nivel.getMapa().getMatriz()[i][j] != '#' && nivel.getMapa().getMatriz()[i][j] != '.')
				nivel.getMapa().getMatriz()[i][j] = ' ';
		}
	}
	//Añadir jugador
	if (snake) {
		snake->dibujar(nivel.getMapa().getMatriz(), nivel.getMapa().getAncho(), nivel.getMapa().getAlto());
	}
	
	//Imprimir mapa
	system("cls");
	for (int i = 0; i < nivel.getMapa().getAlto(); i++) {
		for (int j = 0; j < nivel.getMapa().getAncho(); j++) {
			std::cout << nivel.getMapa().getMatriz()[i][j];
		}
		std::cout << std::endl;
	}
	//Puntos
	std::cout << "Puntaje: " << puntaje->getPuntos() << std::endl;
}

void cMotorJuego::LoopDeJuego() {
	char tecla;
	bool muerte = false;

	while (!muerte) {
		PrintNivel();
		tecla = _getch(); // lee sin necesidad de Enter

		int dx = 0, dy = 0;
		if (tecla == 'a') { dx = -1; }
		else if (tecla == 'd') { dx = 1; }
		else if (tecla == 'w') { dy = 1; }
		else if (tecla == 's') { dy = -1; }
		else if (tecla == 'q') { break; }
		int nuevoX = snake->getX() + dx;
		int nuevoY = snake->getY() + dy;


		// Verifica si esta dentro de los limites
		if (0 < nuevoX && nuevoX <= nivel.getMapa().getAncho() &&
			0 < nuevoY && nuevoY <= nivel.getMapa().getAlto()) {

			// Llamar a mover, donde se verifican las colisiones
			snake->mover(dx, dy, nivel.getMapa().getAncho(), nivel.getMapa().getAlto(), nivel.getMapa().getMatriz(), muerte);
			if (!muerte && uva && (uva->getCantidad() > 0)) {
				int cabezaX = snake->getX() - 1;
				int cabezaY = nivel.getMapa().getAlto() - snake->getY();
				// Verificar si cabeza come uva
				if (nivel.getMapa().getMatriz()[cabezaY][cabezaX] == '.') {
					snake->crecer();
					snake->crecer();
					puntaje->aumentar(2);
					uva->disminuir();
					uva->dibujar(nivel.getMapa().getMatriz(), nivel.getMapa().getAncho(), nivel.getMapa().getAlto());

					if (nivelActual < 3 && puntaje->getPuntos()%10 == 0) {
						nivelActual++;
						// Limpiar mapa (todo excepto las paredes)
						for (int i = 0; i < nivel.getMapa().getAlto(); i++) {
							for (int j = 0; j < nivel.getMapa().getAncho(); j++) {
								if (nivel.getMapa().getMatriz()[i][j] != ' ') {
									nivel.getMapa().getMatriz()[i][j] = ' ';
								}
							}
						}
						cargarNivel(nivelActual);
						// Reiniciar serpiente
						delete snake;
						snake = new cSerpiente(3, 3, 'O');

						// Reubicar comida
						uva->dibujar(nivel.getMapa().getMatriz(), nivel.getMapa().getAncho(), nivel.getMapa().getAlto());
					}
					else if (puntaje->getPuntos() >= 30){
						break;
						std::cout << "Ganaste" << std::endl;
					}
				}
			}
		}
		else {
			// Si se sale del mapa, muere
			muerte = true;
		}
	}

	std::cout << " Has perdido!" << std::endl;
}
