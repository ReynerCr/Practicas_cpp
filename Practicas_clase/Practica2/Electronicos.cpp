#include <iostream>
#include "Electronicos.h"
#include "Producto.h"

using namespace std;

Electronicos::Electronicos(): Producto() {
	voltaje = 0;
}

Electronicos::Electronicos(int codigo, char nombre[50], float precio, char estado, int voltaje) : Producto(codigo, nombre, precio, estado) {
	this->voltaje = voltaje;
}

void Electronicos::setVoltaje(int voltaje) {
	this->voltaje = voltaje;
}

int Electronicos::getVoltaje() {
	return voltaje;
}

void Electronicos::cargarDatos() {
	this->Producto::cargarDatos();
	cout<<endl<<endl<<"Voltaje: "; cin.sync(); cin>>voltaje;
}

void Electronicos::mostrarDatos() {
	this->Producto::mostrarDatos();
	cout<<endl<<endl<<"Voltaje: "<<voltaje<<endl;
}

Electronicos::~Electronicos() {
	
}
