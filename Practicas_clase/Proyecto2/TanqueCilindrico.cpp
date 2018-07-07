#include "TanqueCilindrico.h"
#include "Informacion.h"

#include <iostream>

using namespace std;

TanqueCilindrico::TanqueCilindrico() { 
	this->diametroTapa = 0.0;
	this->altura = 0.0;
}

TanqueCilindrico::TanqueCilindrico(float diametroTapa, float altura) { 
	this->diametroTapa = diametroTapa;
	this->altura = altura;
}

		
void TanqueCilindrico::calcularSuperficie() {
	float aux;
	const float pi = 3.141592654;
	aux = ((pi*((diametroTapa/2)*(diametroTapa/2))*2)) + (2*pi*(diametroTapa/2)*altura);
	this->Tanque::setSuperficie(aux);
}

void TanqueCilindrico::calcularPrecio(float precioFibra) {
	unsigned long long aux;
	aux = (int)((precioFibra * this->Tanque::getSuperficie()) * 1.20);
	this->Tanque::setPrecio(aux);
}

void TanqueCilindrico::setDiamTapa(float diametroTapa) {
	this->diametroTapa = diametroTapa;
}

void TanqueCilindrico::setAltura(float altura) {
	this->altura = altura;
}

float TanqueCilindrico::getDiamTapa() {
	return this->diametroTapa;
}

float TanqueCilindrico::getAltura() {
	return this->altura;
}

void TanqueCilindrico::mostrarDatos() {
	this->Tanque::mostrarDatos();
	cout<<"Diametro de la tapa: "<<this->diametroTapa<<"."<<endl
		<<"Altura: "<<altura<<"."<<endl;
}

TanqueCilindrico::~TanqueCilindrico() { }
