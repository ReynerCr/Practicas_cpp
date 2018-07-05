#include "TanqueCilindrico.h"
#include "Informacion.h"

#include <iostream>

using namespace std;

TanqueCilindrico::TanqueCilindrico() { 

}

TanqueCilindrico::TanqueCilindrico(int codigo, long double precio, float altura) { 

}

		
void TanqueCilindrico::calcularSuperficie() {
	double aux;
	const float pi = 3.141592654;
	aux = ((pi*((diametroTapa/2)*(diametroTapa/2))*2)) + (2*pi*(diametroTapa/2)*altura);
	this->Tanque::setSuperficie(aux);
}

void TanqueCilindrico::calcularPrecio(float precioFibra) {
	long double aux;
	aux = ((precioFibra)*this->Tanque::getSuperficie())*1.20;
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
	cout<<endl<<"Cilindrico: ";
	this->Tanque::mostrarDatos();
	cout<<"diametro tapa: "<<this->diametroTapa<<endl
		<<"altura: "<<altura<<endl;
}

TanqueCilindrico::~TanqueCilindrico() { }
