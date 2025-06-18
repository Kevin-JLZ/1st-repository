#pragma once
class cMapa
{
private:
	char** matriz;
	int alto;
	int ancho;
	
public:
	cMapa();
	cMapa(int alto, int ancho);
	~cMapa();

	void colocarBloque(int x, int y);

	void setAlto (int alto);
	void setAncho(int ancho);

	int getAlto();
	int getAncho();
	char** getMatriz();

};

