#include "cComida.h"

cComida::cComida(int x, int y, char simbolo, int cantidad) : cEntidad(x, y, simbolo), cantidad(cantidad) {}

int cComida::getCantidad() {
	return cantidad;
}