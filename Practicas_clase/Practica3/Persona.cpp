#include "Persona.h"
#include <string.h>

using namespace std;

Persona::Persona() {
	this->cedula = 0;
	this->edad = 0;
	strcpy (this->nombre, " ");
}

Persona::Persona(int cedula, int edad, char nombre[40]) {
	this->cedula = cedula;
	this->edad = edad;
	strcpy (this->nombre, nombre);
}

void Persona::setCedula(int cedula) {
	this->cedula = cedula;
}

void Persona::setEdad(int edad) {
	this->edad = edad;
}

void Persona::setNombre(char nombre[40]) {
	strcpy (this->nombre, nombre);
}

int Persona::getCedula() {
	return cedula;
}

int Persona::getEdad() {
	return edad;
}

char* Persona::getNombre() {
	return nombre;
}


Persona::~Persona() { 
}
