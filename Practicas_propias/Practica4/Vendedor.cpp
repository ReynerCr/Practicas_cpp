#include <iostream>
#include <string.h>
#include "Vendedor.h"

using namespace std;

Vendedor::Vendedor() {
	strcpy(this->nombre, "");
	this->ventasAnuales = 0;
}

Vendedor::Vendedor(char nombre[50], double ventasAnuales) {
	strcpy(this->nombre, nombre);
	this->ventasAnuales=ventasAnuales;
}

void Vendedor::cargarDatos() {
	double venta = 0;
	
	cout<<"Ingrese el nombre del vendedor: "; cin.sync(); cin.getline(this->nombre, 50);
	for (int i=0; i<12; i++) {
		cout<<"Digite el valor de la venta del mes "<<(i+1)<<": "; cin.sync(); cin>>venta;
		this->ventasAnuales += venta;
	}//for para capturar datos de las ventas
}

void Vendedor::mostrarDatos() {
	cout<<"Las ventas anuales totales del vendedor "<<this->nombre<<" son: $"<<ventasAnuales<<endl<<endl;
}

double Vendedor::getVentasAnuales () {
	return ventasAnuales;
}

Vendedor::~Vendedor() {
}
