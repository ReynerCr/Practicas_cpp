#include <iostream>
#include <string.h>
#include <ctype.h>
#include "Producto.h"
#include  "Ingrediente.h"

using namespace std;

//por defecto
Producto::Producto() {
	codigo = 0;
	strcpy (nombre, " ");
	precio = 0.0;
	estado = ' ';
	canIngredientes = 0;
	formula = 0;
}

//parametrico basico;
Producto::Producto(int codigo, char nombre[50], float precio, char estado) {
	this->codigo = codigo;
	strcpy (this->nombre, nombre);
	this->precio = precio;
	this->estado = estado;
	this->canIngredientes = 0;
	formula = 0;
}

//parametrico de vector de formula creando ingredientes vacios
Producto::Producto(int codigo, char nombre[], float precio, char estado, int canIngredientes) {
	this->codigo = codigo;
	strcpy (this->nombre, nombre);
	this->precio = precio;
	this->estado = estado;
	this->canIngredientes = canIngredientes;
	formula = new Ingrediente* [canIngredientes];
	for (int i=0; i<canIngredientes; i++) {
		formula[i] = new Ingrediente();
	}
}

//parametrico pidiendo un **Ingrediente
Producto::Producto(int codigo, char nombre[], float precio, char estado, int canIngredientes, Ingrediente **formula) {
	this->codigo = codigo;
	strcpy (this->nombre, nombre);
	this->precio = precio;
	this->estado = estado;
	this->canIngredientes = canIngredientes;
	if (canIngredientes>0) {
		formula = new Ingrediente* [canIngredientes];
		cout<<"Ingrese los ingredientes: "<<endl;
		for (int i=0; i<canIngredientes; i++) {
			cout<<(i+1)<<". ";
			formula[i] = new Ingrediente();
			formula[i]->cargarDatos();
		}//for
	}//if
	this->formula = formula;
}

//parametrico ejemplo (primera clase de poo en c++)
Producto::Producto(int codigo, char nombre[], char estado) {
	this->codigo = codigo;
	strcpy (this->nombre, nombre);
	this->estado = estado;
}

void Producto::cargarDatos() {
	cout<<"Ingrese los datos del producto"<<endl;
	cout<<"Codigo: "; cin.sync(); cin>>codigo;
	cout<<"Nombre: "; cin.sync(); cin.getline(nombre, 49);
	cout<<"Precio: "; cin.sync(); cin>>precio;
	cout<<"Estado: "; cin.sync(); estado = tolower(cin.get());
	cout<<"Cantidad de ingredientes: "; cin.sync(); cin>>canIngredientes;
	formula = new Ingrediente* [canIngredientes];
	for (int i=0; i<canIngredientes; i++) {
		cout<<endl<<endl;
		formula[i] = new Ingrediente();
		cout<<(i+1)<<". ";
		formula[i]->cargarDatos();
	}
}

void Producto::mostrarDatos() {
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Codigo: "<<this->codigo<<endl;
	cout<<"Precio: "<<this->precio<<endl;
	cout<<(estado == 'a' ?"Producto activo":"Producto no activo")<<endl;
	cout<<endl<<"\tIngredientes:"<<endl;
	for (int i=0; i<canIngredientes; i++) {
		cout<<(i+1)<<". ";
		formula[i]->calcularPrecio();
		formula[i]->mostDatEnLinea();  //aqu� se puede usar mostrarDatos pero me parece que queda mejor asi
	}
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

void Producto::setFormula(Ingrediente** formula) {
	this->formula = formula;
}

void Producto::setFormulaI(int p, Ingrediente *formula) {
	this->formula[p] = formula;
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

int Producto::getCanIngredientes() {
	return canIngredientes;
}

Ingrediente** Producto::getFormula() {
	return formula;
}

Ingrediente* Producto::getFormulaI(int p) {
	return formula[p];
}

Producto::~Producto() {
}
