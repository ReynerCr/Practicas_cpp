#include "Objeto.h"

using namespace std;

Objeto::Objeto() {
	this->tamCm = 0;
	this->annos = 0;
	this->encendido = false;
	this->operativo = true;
}

void Objeto::setTamCm(int tamCm) {
	this->tamCm = tamCm;
}

void Objeto::setAnnos(int annos) {
	this->annos = annos;
}

void Objeto::setEncendido(char enc) {
	if (enc == 's')
		encendido = true;
	
	else
		encendido = false;
}

void Objeto::setOperativo(char oper) {
	if (oper == 's')
		operativo = true;
		
	else
		operativo = false;
}

		
int Objeto::getTamCm()  {
	return this->tamCm;
}

int Objeto::getAnnos() {
	return this->annos;
}

char* Objeto::getEncendido() {
	if (encendido == true)
		return (char*)"Esta encendido.";
	
	else
		return (char*)"No esta encendido.";
}

char* Objeto::getOperativo() {
		if (operativo == true)
		return (char*)"Funciona correctamente.";
	
	else
		return (char*)"No funciona.";
}

