#include "Tanque.h"

#include <iostream>
using namespace std;

Tanque::Tanque() {
	this->codigo = 0;
	this->precio = 0.0;
	this->superficie = 0.0;
}

Tanque::Tanque(int codigo, float precio, double superficie) {
	this->codigo = codigo;
	this->precio = precio;
	this->superficie = superficie;
}

void Tanque::setCodigo(int codigo) {
	this->codigo = codigo;
}

void Tanque::setPrecio(long double precio) {
	this->precio = precio;
}

void Tanque::setSuperficie(double superficie) {
	this->superficie = superficie;
}

int Tanque::getCodigo() {
	return this->codigo;
}

long double Tanque::getPrecio() {
	return this->precio;
}

double Tanque::getSuperficie() {
	return this->superficie;
}

void Tanque::setDiamTapa(float) { }
void Tanque::setDiamSuperior(float) { }
void Tanque::setDiamInferior(float) { }
void Tanque::setAngulo(float) { }

void Tanque::mostrarDatos() {
	cout<<"codigo: "<<codigo<<endl
		<<"Precio: "<<precio<<endl
		<<"Superficie: "<<superficie<<endl;
}

Tanque::~Tanque() { }
