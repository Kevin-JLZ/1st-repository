#include "cEntidad.h"

cEntidad::cEntidad() : x(-1), y(-1), simbolo(' '), vivo(true) {}

cEntidad::cEntidad(int x, int y, char simbolo) : x(x), y(y), simbolo(simbolo), vivo(true) {}
