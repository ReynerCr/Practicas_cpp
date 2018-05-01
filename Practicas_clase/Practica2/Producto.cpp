#include <iostream>
#include <string.h>
#include <ctype.h>
#include "Producto.h"

using namespace std;

Producto::Producto() {
	codigo = 0;
	strcpy (nombre, " ");
	precio = 0.0;
	estado = ' ';
}

Producto::Producto(int codigo, char nombre[], float precio, char estado) {
	this->codigo = codigo;
	strcpy (this->nombre, nombre);
	this->precio = precio;
	this->estado = estado;
}

Producto::Producto(int codigo, char nombre[], char estado) {
	this->codigo = codigo;
	strcpy (this->nombre, nombre);
	this->estado = estado;
}

void Producto::cargarDatos() {
	cout<<"Ingrese los datos del producto"<<endl;
	cout<<"Codigo: "; cin>>codigo;
	cin.sync();
	cout<<"Nombre: "; cin.getline(nombre, 49);
	cin.sync();
	cout<<"Precio: "; cin>>precio;
	cin.sync();
	cout<<"Estado: "; estado = tolower(cin.get());
}

void Producto::mostrarDatos() {
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Codigo: "<<this->codigo<<endl;
	cout<<"Precio: "<<this->precio<<endl;
	
	cout<<(estado == 'a' ?"Producto activo":"Producto no activo")<<endl;
}

void Producto::setCodigo(int codigo) {
	this->codigo = codigo;
}

void Producto::setNombre(char nombre[50]) {
	strcpy (this->nombre, nombre);
}

void Producto::setPrecio(float precio)  {
	this->precio = precio;
}

void Producto::setEstado(char estado) {
	this->estado = estado;
}
		
int Producto::getCodigo() {
	return codigo;
}

char* Producto::getNombre () {
	return nombre;
}

float Producto::getPrecio() {
	return precio;
}

char Producto::getEstado() {
	return estado;
}

Producto::~Producto() {
}
