#include "cPersonaje.h"

cPersonaje::cPersonaje()
{
	Nombre = nullptr;
	vida = -1;
	vivo = true;
	escalon = 0;
}
cPersonaje::cPersonaje(char* n, int vida, bool vivo, int escalon) 
					: Nombre(nullptr)
{
	int count = 0;
	while (n[count] != '\0') { count++; }
	Nombre = new char[count + 1];
	for (int i = 0; i <= count; i++) { Nombre[i] = n[i]; }

	this->vida = vida;
	this->vivo = vivo;
	this->escalon = escalon;
}
cPersonaje::~cPersonaje() {
	if (Nombre != nullptr) { delete[] Nombre; }
}
cPersonaje::cPersonaje(cPersonaje& obj) {
	int count = 0;
	while (obj.Nombre[count] != '\0') { count++; }
	Nombre = new char[count + 1];
	for (int i = 0; i <= count; i++) { Nombre[i] = obj.Nombre[i]; }

	vida = obj.vida;
	vivo = obj.vivo;
	escalon = obj.escalon;
}
cPersonaje& cPersonaje::operator=(const cPersonaje& obj) {
	if (this != &obj) {
		if (Nombre != nullptr) { delete[] Nombre; }
		int count = 0;
		while (obj.Nombre[count] != '\0') { count++; }
		Nombre = new char[count + 1];
		for (int i = 0; i <= count; i++) { Nombre[i] = obj.Nombre[i]; }

		vida = obj.vida;
		vivo = obj.vivo;
		escalon = obj.escalon;
	}
	return *this;
}
void cPersonaje::setNombre(char* n) {
	if (Nombre != nullptr) { delete[] Nombre; }
	int count = 0;
	while (n[count] != '\0') { count++; }
	Nombre = new char[count + 1];
	for (int i = 0; i <= count; i++) { Nombre[i] = n[i]; }
}
void cPersonaje::setVida(int vida) {
	this->vida = vida;
}
void cPersonaje::setEscalon(int escalon) {
	this->escalon = escalon;
}

char* cPersonaje::getNombre() {
	return Nombre;
}
int cPersonaje::setVida() {
	return vida;
}
bool cPersonaje::setVivo() {
	return vivo;
}
bool cPersonaje::setEscalon() {
	return escalon;
}