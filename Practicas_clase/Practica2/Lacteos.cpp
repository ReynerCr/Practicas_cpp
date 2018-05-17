#include <iostream>
#include <string.h>
#include "Lacteos.h"
#include "Producto.h"

using namespace std;


Lacteos::Lacteos(): Producto() {
	strcpy (caducidad, " ");
}

Lacteos::Lacteos(int codigo, char nombre[], float precio, char estado, char caducidad[]) : Producto(codigo, nombre, precio, estado) {	
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
	cout<<endl<<endl<<"Caducidad: "; cin.sync(); cin.getline(this->caducidad, 11);
}

void Lacteos::mostrarDatos() {
	this->Producto::mostrarDatos();
	cout<<endl<<endl<<"Caducidad: "<<caducidad;
}

Lacteos::~Lacteos() {
}
