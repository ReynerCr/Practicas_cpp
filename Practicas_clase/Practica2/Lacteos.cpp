#include <iostream>
#include <string.h>
#include "Lacteos.h"

using namespace std;


Lacteos::Lacteos() {
	strcpy (caducidad, " ");
}

Lacteos::Lacteos(char caducidad[12], int codigo, char nombre[50], float precio, char estado) : Producto(codigo,  nombre, precio, estado) {	
	strcpy (this->caducidad, caducidad);
}

void Lacteos::setCaducidad(char caducidad[11]) {
	strcpy (this->caducidad, caducidad);
}

char* Lacteos::getCaducidad() {
	return caducidad;
}

void Lacteos::cargarDatos() {
	this->Producto::cargarDatos();
	cout<<"Caducidad: "; cin.sync(); cin.getline(this->caducidad, 11);
}

void Lacteos::mostrarDatos() {
	this->Producto::mostrarDatos();
	cout<<"Caducidad: "<<caducidad;
}

Lacteos::~Lacteos() {
}
