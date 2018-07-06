#include "Tanque.h"
#include <string.h>
#include <iostream>
using namespace std;

Tanque::Tanque() {
	this->codigo = 0;
	this->precio = 0;
	this->superficie = 0.0;
}

Tanque::Tanque(int codigo, unsigned long long precio, float superficie) {
	this->codigo = codigo;
	this->precio = precio;
	this->superficie = superficie;
}

void Tanque::setCodigo(int codigo) {
	this->codigo = codigo;
}

void Tanque::setPrecio(unsigned long long precio) {
	this->precio = precio;
}

void Tanque::setSuperficie(float superficie) {
	this->superficie = superficie;
}

/*void Tanque::setColor(char color[12]) {
	strcpy(this->color, color);
}*/

int Tanque::getCodigo() {
	return this->codigo;
}

unsigned long long Tanque::getPrecio() {
	return this->precio;
}

float Tanque::getSuperficie() {
	return this->superficie;
}

/*char Tanque::getColor() {
	return this->color;
}*/

void Tanque::setDiamTapa(float) { }
void Tanque::setDiamSuperior(float) { }
void Tanque::setDiamInferior(float) { }
void Tanque::setAngulo(float) { }

void Tanque::mostrarDatos() {
	cout<<"Codigo: "<<codigo<<"."<<endl
		<<"Precio: "<<precio<<" bs."<<endl
		<<"Superficie: "<<superficie<<" metros cubicos."<<endl;
}

Tanque::~Tanque() { }
