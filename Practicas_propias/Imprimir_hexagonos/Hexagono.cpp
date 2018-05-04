#include "Hexagono.h"
#include <iostream>

using namespace std;

Hexagono::Hexagono() {
	this->tamLados = 0;
	this->caracter = ' ';
}

Hexagono::Hexagono(int tamLados, char caracter) {
	this->tamLados = tamLados;
	this->caracter = caracter;
}

void Hexagono::setTamlados(int tamLados) {
	this->tamLados = tamLados;
}

void Hexagono::setCaracter(char caracter) {
	this->caracter = caracter;
}

int Hexagono::getTamLados() {
	return tamLados;
}

char Hexagono::getCaracter() {
	return caracter;
}

void Hexagono::cargarDatos() {
	cout<<"Ingrese el tamanyo de los lados de la figura: "; cin.sync(); cin>>this->tamLados;
	cout<<"Ingrese el caracter: "; cin.sync(); this->caracter = cin.get();
}

void Hexagono::mostrarDatos() {
	cout<<"Tamanyo de los lados: "<<tamLados<<endl<<"Caracter: "<<caracter<<endl;
}
	
void Hexagono::mostrarHexagono() {
	//PARTE DE ARRIBA DE LA FIGURA
	for (int i=0; i<tamLados; i++) {
		for (int j=(tamLados-i); j>0; j--) {
			cout<<" ";
		}//espacios en blanco
		for (int k=0; k<(tamLados+(i*2)); k++) {
			cout<<caracter;
		}//impresion del caracter
		cout<<endl;
	}//altura de la figura
	
	//PARTE DEL MEDIO DE LA FIGURA
	for (int i=0; i<(tamLados-2); i++) {
		cout<<" ";  //espacio en blanco
		for (int k=0; k<(tamLados+((tamLados-1)*2)); k++) {
			cout<<caracter;
		}//impresion del caracter
		cout<<endl;
	}//altura de la figura
	
	//PARTE DE ABAJO DE LA FIGURA
	for (int i=tamLados-1; i>=0; i--) {
		for (int j=0; j<(tamLados-i); j++) {
			cout<<" ";
		}//espacios en blanco
		for (int k=(tamLados+(i*2))-1; k>=0; k--) {
			cout<<caracter;
		}//impresion del caracter
		cout<<endl;
	}//altura de la figura
}

Hexagono::~Hexagono() {
}
