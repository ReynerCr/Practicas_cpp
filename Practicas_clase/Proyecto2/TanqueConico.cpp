#include "TanqueConico.h"
#include "Informacion.h"
#include <math.h>
#include <iostream>
using namespace std;



TanqueConico::TanqueConico() {
		diametroSuperior = 0.0;
		diametroInferior = 0.0;
		altura = 0.0;
		angulo = 0.0;
}

TanqueConico::TanqueConico(float diametroSuperior, float diametroInferior, float altura, float angulo) {
		this->diametroSuperior = diametroSuperior;
		this->diametroInferior = diametroInferior;
		this->altura = altura;
		this->angulo = angulo;
}
		
void TanqueConico::calcularSuperficie() {
	float aux;
	const float pi = 3.141592654;
	aux = (pi*(pow((diametroSuperior/2), 2) + pow((diametroInferior/2), 2))) + ((pow (altura, 1.33)) / (tan((2*angulo)*(pi/180)))); 
	this->Tanque::setSuperficie(aux);
}

void TanqueConico::calcularPrecio(float precioFibra) {
	unsigned long long aux;
	aux = (int)((precioFibra * this->Tanque::getSuperficie()) * 1.20);
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
	this->Tanque::mostrarDatos();
	cout<<"Diametro superior: "<<this->diametroSuperior<<"."<<endl
		<<"Diametro inferior: "<<this->diametroInferior<<"."<<endl
		<<"Altura: "<<altura<<"."<<endl
		<<"Angulo: "<<angulo<<"."<<endl;
}

TanqueConico::~TanqueConico() { }
