#include "Casilla.h"
#include <iostream>

using namespace std;

Casilla::Casilla() {
}

void Casilla::setCarBase() {
	this->carBase = carBase;
}

void Casilla::setObjeto() {
	this->objeto = objeto;
}

void Casilla::setColor() {
	this->color = color;
	//p=piel, N=negro, A=azul oscuro, a=azul claro, r=rosa, y=yellow, 
}

char Casilla::getCarBase() {
	return this->carBase;
}

char Casilla::getObjeto() {
	return this->objeto;
}

char Casilla::getColor() {
	return this->color;
}

Casilla::~Casilla() {
}
