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
		formula[i]->calcularPrecio();
	}
}

void Producto::mostrarDatos() {
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Codigo: "<<this->codigo<<endl;
	cout<<"Precio: "<<this->precio<<endl;
	cout<<(estado == 'a' ?"Producto activo":"Producto no activo")<<endl;
	if (canIngredientes>0) {
		cout<<endl<<"Ingredientes:"<<endl;
		for (int i=0; i<canIngredientes; i++) {
			formula[i]->mostDatEnLinea();  //aquí se puede usar mostrarDatos de ingrediente pero me parece que queda mejor asi
		}
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

void Producto::setCanIngredientes(int canIngredientes) {
	Ingrediente **form;
	form = new Ingrediente *[canIngredientes];	
	//Arreglo del vector formula dependiendo de la canIngredientes ingresada
	if (this->canIngredientes<canIngredientes) {		
		for (int i=0; i<canIngredientes; i++) {
			form[i] = new Ingrediente();
			form[i] = this->formula[i];
		}//copio todo lo de formula original a formula nueva (que tiene tamaño mayor)
		
		for (int i=this->canIngredientes; i<canIngredientes; i++) {
			form[i] = new Ingrediente();
			cout<<(i+1)<<". ";
			form[i]->cargarDatos();
			form[i]->calcularPrecio();
			system("cls");
		}//creo las nuevas formulas
		
		for (int i=0; i<this->canIngredientes; i++) {
			this->formula[i] = 0;
			delete this->formula[i];
		}//borro el vector original, ya que luego form sera el nuevo formula
		
		this->Producto::setFormula(form); //aqui hago que formula apunte a form.
		form = 0; //elimino el punto a esa dirección
		delete []form;
	}
	
	else {
		for (int i=this->canIngredientes; i>canIngredientes; i--) {
			this->formula[i] = 0;
			delete this->formula[i];
		}//borro elementos sobrantes para evitar errores
	}
	
	this->canIngredientes = canIngredientes;
}

void Producto::setFormula(Ingrediente **formula) {
	this->formula = formula;
}

void Producto::setFormulaI(int p, Ingrediente *formula) {
	this->formula[p] = formula;
}

void Producto::setFormulaIO(int p, Ingrediente formula) {
	*(this->formula[p]) = formula;
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

char* Producto::getNomFormula(int p) {
	return (this->formula[p]->getNombre());
}

Producto::~Producto() {
}
