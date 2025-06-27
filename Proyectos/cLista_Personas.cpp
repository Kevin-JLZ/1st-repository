#include "cLista_Personas.h"

cLista_Personas::cLista_Personas() {
	data = nullptr;
	size = -1;
}
cLista_Personas::cLista_Personas(cPersona arr[], int size) {
	if (data != nullptr) { delete[] data; }
	data = new cPersona[size];
	for (int i = 0; i < size; i++) { data[i] = arr[i]; }
	this->size = size;
}
cLista_Personas::~cLista_Personas() {
	data = nullptr;
}
void cLista_Personas::Print() {
	for (int i = 0; i < size; i++) { data[i].Print(); }
}
//cPersona cLista_Personas::BuscarNombre(char* n) {}