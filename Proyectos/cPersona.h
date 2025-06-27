#pragma once
#include <iostream>
class cPersona
{
private:
	char* Nombre;
	char* ApellidoPaterno;
	char* ApellidoMaterno;
	int DNI;
	char Genero;
	char Fecha[11];
public:
	cPersona();
	cPersona(const char* n, const char* ap, const char* am, int dni, char g, const char f[11]);
	cPersona(cPersona& obj);
	cPersona& operator=(cPersona& obj);
	~cPersona();

	void Print();

	void setNombre(char* n);
	void setApellidoPaterno(char* ap);
	void setApellidoMaterno(char* am);
	void setDNI(int dni);
	void setGenero(char g);
	void setFecha(char f[11]);

	char* getNombre();
	char* getApellidoPaterno();
	char* getApellidoMaterno();
	int getDNI();
	char getGenero();
	char* getFecha();
};
