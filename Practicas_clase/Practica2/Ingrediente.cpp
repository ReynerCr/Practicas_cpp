#include <iostream>
#include <string.h>
#include "Ingrediente.h"

using namespace std;

Ingrediente::Ingrediente() {
	this->codigo = 0;
	strcpy (this->nombre, "");
	strcpy (this->unidadMedida, "");
	this->costo = 0.0;
	this->precio = 0.0;
}

Ingrediente::Ingrediente(int codigo, char* nombre, char* unidadMedida, float costo, float precio) {
	this->codigo = codigo;
	strcpy (this->nombre, nombre);
	strcpy (this->unidadMedida, unidadMedida);
	this->costo = costo;
	this->precio = precio;
}

void Ingrediente::cargarDatos() {
	cout<<"Ingrese los datos del producto."<<endl;
	cout<<"Ingrese codigo: "; cin.sync(); cin>>this->codigo;
	cout<<"Ingrese nombre: "; cin.sync(); cin.getline(this->nombre, 29);
	cout<<"Ingrese unidad de medida: "; cin.sync(); cin.getline(this->unidadMedida, 19);
	cout<<"Ingrese costo: "; cin.sync(); cin>>this->costo;
	this->precio = 0.0;
	cout<<endl;
}

void Ingrediente::mostrarDatos() {
	cout<<"Codigo: "<<this->codigo<<endl;
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Unidad de medida: "<<this->unidadMedida<<endl;
	cout<<"Costo: "<<this->costo<<endl;
	cout<<"Precio: "<<this->precio<<endl<<endl;
}

void Ingrediente::mostDatEnLinea() {
	cout<<this->codigo<<"\t"<<this->nombre<<"\t"<<this->unidadMedida<<"\t"<<this->costo<<"\t"<<this->precio<<endl;
}

void Ingrediente::calcularPrecio() {
	this->precio = (this->costo*1.40)*1.12;
}


void Ingrediente::setCodigo(int codigo) {
	this->codigo = codigo;
}
	
void Ingrediente::setNombre(char nombre[30]) {
	strcpy(this->nombre, nombre);
}
	
void Ingrediente::setUnidadMedida(char unidadMedida[10]) {
	strcpy(this->unidadMedida, unidadMedida);
}
	
void Ingrediente::setCosto(float costo) {
	this->costo = costo;
}
	
void Ingrediente::setPrecio(float precio) {
	this->precio = precio;
}
	
		
int Ingrediente::getCodigo() {
	return codigo;
}
	
char* Ingrediente::getNombre() {
	return nombre;
}
	
char* Ingrediente::getUnidadMedida() {
	return unidadMedida;
}
	
float Ingrediente::getCosto() {
	return costo;
}
	
float Ingrediente::getPrecio() {
	return precio;
}

Ingrediente::~Ingrediente() {
}
