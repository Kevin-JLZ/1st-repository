#pragma once

class cPersonaje
{
private:
	char* Nombre;
	int vida;
	bool vivo;
	int escalon;

private:
	cPersonaje();
	cPersonaje(char* n, int vida, bool vivo, int escalon);
	~cPersonaje();

	cPersonaje(cPersonaje& obj);
	cPersonaje& operator=(const cPersonaje& obj);

	void setNombre(char* n);
	void setVida(int vida);
	void setEscalon(int escalon);

	char* getNombre();
	int setVida();
	bool setVivo();
	bool setEscalon();


};

