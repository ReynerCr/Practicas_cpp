#include "TanqueConico.h"
#include "Informacion.h"
#include <math.h>
#include <iostream>
using namespace std;



TanqueConico::TanqueConico() {
}

TanqueConico::TanqueConico(float, float, float, float) {
}
		
void TanqueConico::calcularSuperficie() {
	double aux;
	const float pi = 3.141592654;
	aux = (pi*(pow((diametroSuperior/2), 2) + pow((diametroInferior/2), 2))) + ((pow (altura, 1.33)) / (tan(2*angulo))); 
	this->Tanque::setSuperficie(aux);
}

void TanqueConico::calcularPrecio(float precioFibra) {
	long double aux;
	aux = ((precioFibra)*this->Tanque::getSuperficie())*1.20;
	this->Tanque::setPrecio(aux);
}

void TanqueConico::setDiamSuperior(float diametroSuperior) {
	this->diametroSuperior = diametroSuperior;
}

void TanqueConico::setDiamInferior(float diametroInferior) {
	this->diametroInferior = diametroInferior;
}

void TanqueConico::setAltura(float altura) {
	this->altura = altura;
}

void TanqueConico::setAngulo(float angulo) {
	this->angulo = angulo;
}

float TanqueConico::getDiamSuperior() {
	return this->diametroSuperior;
}

float TanqueConico::getDiamInferior() {
	return this->diametroInferior;
}

float TanqueConico::getAltura() {
	return this->altura;
}

float TanqueConico::getAngulo() {
	return this->angulo;
}

void TanqueConico::mostrarDatos() {
	cout<<endl<<"Conico: ";
	this->Tanque::mostrarDatos();
	cout<<"diametro superior: "<<this->diametroSuperior<<endl
		<<"diametro inferior: "<<this->diametroInferior<<endl
		<<"altura: "<<altura<<endl
		<<"angulo: "<<angulo<<endl;
}

TanqueConico::~TanqueConico() { }
