#include "Personaje.h"
#include <iostream>

using namespace std;

Personaje::Personaje() {
	this->posFilas = -1;
	this->posColumnas = -1;
	this->direccion = -1;
	this->color = ' ';
	this->caracter = ' ';
	this->estado = ' ';
}

void Personaje::setPosFilas(int posFilas) {
	this->posFilas = posFilas;
}

void Personaje::setPosColumnas(int posColumnas) {
	this->posColumnas = posColumnas;
}

void Personaje::setDireccion(int direccion) {
	this->direccion = direccion;
}

void Personaje::setColor(char color) {
	this->color = color;
}

void Personaje::setEstado(char estado) {
	this->estado = estado;
}
		
int Personaje::getPosFilas() {
	return this->posFilas;
}

int Personaje::getPosColumnas() {
	return this->posColumnas;
}

int Personaje::getDireccion() {
	return this->direccion;
}

char Personaje::getColor() {
	return this->color;
}

char Personaje::getCaracter() {
	return this->caracter;
}

char Personaje::getEstado() {
	return this->estado;
}


Personaje::~Personaje() {
}
