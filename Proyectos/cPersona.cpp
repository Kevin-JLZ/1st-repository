#include "cPersona.h"

cPersona::cPersona() {
	Nombre = nullptr;
	ApellidoPaterno = nullptr;
	ApellidoMaterno = nullptr;
	DNI = -1;
	Genero = 'x';
	char f[11] = "xx/xx/xxxx";
	for (int i = 0; i < 11; i++) { Fecha[i] = f[i]; }
}
cPersona::cPersona(const char* n, const char* ap, const char* am, int dni, char g, const char f[11])
					: Nombre(nullptr), ApellidoPaterno(nullptr), ApellidoMaterno(nullptr) {
	int count = 0;
	while (n[count] != '\0') { count++; }
	Nombre = new char[count + 1];
	for (int i = 0; i <= count; i++) { Nombre[i] = n[i]; }
	//------------------
	count = 0;
	while (ap[count] != '\0') { count++; }
	ApellidoPaterno = new char[count + 1];
	for (int i = 0; i <= count; i++) { ApellidoPaterno[i] = ap[i]; }
	//------------------
	count = 0;
	while (am[count] != '\0') { count++; }
	ApellidoMaterno = new char[count + 1];
	for (int i = 0; i <= count; i++) { ApellidoMaterno[i] = am[i]; }
	//------------------
	DNI = dni;
	Genero = g;
	for (int i = 0; i < 11; i++) { Fecha[i] = f[i]; }
}
cPersona::cPersona(cPersona& obj) {
	DNI = obj.DNI;
	Genero = obj.Genero;
	for (int i = 0; i < 11; i++) { Fecha[i] = obj.Fecha[i]; }
	int count = 0;
	while (obj.Nombre[count] != '\0') { count++; }
	Nombre = new char[count + 1];
	for (int i = 0; i <= count; i++) { Nombre[i] = obj.Nombre[i]; }
	//------------------
	count = 0;
	while (obj.ApellidoPaterno[count] != '\0') { count++; }
	ApellidoPaterno = new char[count + 1];
	for (int i = 0; i <= count; i++) { ApellidoPaterno[i] = obj.ApellidoPaterno[i]; }
	//------------------
	count = 0;
	while (obj.ApellidoMaterno[count] != '\0') { count++; }
	ApellidoMaterno = new char[count + 1];
	for (int i = 0; i <= count; i++) { ApellidoMaterno[i] = obj.ApellidoMaterno[i]; }

}
cPersona& cPersona::operator=(cPersona& obj) {
	if (this != &obj) {
		if (Nombre != nullptr) { delete[] Nombre; }
		if (ApellidoPaterno != nullptr) { delete[] ApellidoPaterno; }
		if (ApellidoMaterno != nullptr) { delete[] ApellidoMaterno; }
		DNI = obj.DNI;
		Genero = obj.Genero;
		for (int i = 0; i < 11; i++) { Fecha[i] = obj.Fecha[i]; }
		int count = 0;
		while (obj.Nombre[count] != '\0') { count++; }
		Nombre = new char[count + 1];
		for (int i = 0; i <= count; i++) { Nombre[i] = obj.Nombre[i]; }
		//------------------
		count = 0;
		while (obj.ApellidoPaterno[count] != '\0') { count++; }
		ApellidoPaterno = new char[count + 1];
		for (int i = 0; i <= count; i++) { ApellidoPaterno[i] = obj.ApellidoPaterno[i]; }
		//------------------
		count = 0;
		while (obj.ApellidoMaterno[count] != '\0') { count++; }
		ApellidoMaterno = new char[count + 1];
		for (int i = 0; i <= count; i++) { ApellidoMaterno[i] = obj.ApellidoMaterno[i]; }
	}
	return *this;

}
cPersona::~cPersona() {
	if (Nombre != nullptr) { delete[] Nombre; }
	if (ApellidoPaterno != nullptr) { delete[] ApellidoPaterno; }
	if (ApellidoMaterno != nullptr) { delete[] ApellidoMaterno; }
}
void cPersona::Print() {
	std::cout << "-------------------------" << std::endl;
	if (Nombre != nullptr) { std::cout << "Nombre : " << Nombre << std::endl; }
	if (ApellidoPaterno != nullptr) { std::cout << "Apellido Paterno : " << ApellidoPaterno << std::endl; }
	if (ApellidoMaterno != nullptr) { std::cout << "Apellido Materno : " << ApellidoMaterno << std::endl; }
	std::cout << "DNI : " << DNI << std::endl;
	std::cout << "Genero : " << Genero << std::endl;
	std::cout << "Fecha : " << Fecha << std::endl;
}
void cPersona::setNombre(char* n) {
	if (Nombre != nullptr) { delete[] Nombre; }
	int count = 0;
	while (n[count] != '\0') { count++; }
	Nombre = new char[count + 1];
	for (int i = 0; i <= count; i++) { Nombre[i] = n[i]; }
}
void cPersona::setApellidoPaterno(char* ap) {
	if (ApellidoPaterno != nullptr) { delete[] ApellidoPaterno; }
	int count = 0;
	while (ap[count] != '\0') { count++; }
	ApellidoPaterno = new char[count + 1];
	for (int i = 0; i <= count; i++) { ApellidoPaterno[i] = ap[i]; }
}
void cPersona::setApellidoMaterno(char* am) {
	if (ApellidoMaterno != nullptr) { delete[] ApellidoMaterno; }
	int count = 0;
	while (am[count] != '\0') { count++; }
	ApellidoMaterno = new char[count + 1];
	for (int i = 0; i <= count; i++) { ApellidoMaterno[i] = am[i]; }
}
void cPersona::setDNI(int dni) {
	DNI = dni;
}
void cPersona::setGenero(char g) {
	Genero = g;
}
void cPersona::setFecha(char f[11]) {
	for (int i = 0; i < 11; i++) { Fecha[i] = f[i]; }
}

char* cPersona::getNombre() {
	return Nombre;
}
char* cPersona::getApellidoPaterno() {
	return ApellidoPaterno;
}
char* cPersona::getApellidoMaterno() {
	return ApellidoMaterno;
}
int cPersona::getDNI() {
	return DNI;
}
char cPersona::getGenero() {
	return Genero;
}
char* cPersona::getFecha() {
	return Fecha;
}