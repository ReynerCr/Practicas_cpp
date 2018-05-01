#include <iostream>
#include <string.h>
#include "Persona.h"

using namespace std;

Persona::Persona() {
	this->ci = 0;
	strcpy (nombre, "");
	this->edad = 0;
	this->sexo = ' '; 
}

Persona::Persona(int ci, short unsigned edad, char nombre[50], char sexo) {
	this->ci = ci;
	strcpy(this->nombre, nombre);
	this->edad = edad;
	this->sexo = sexo; 
}

void Persona::cargarDatos() {
	cout<<"Ingrese los datos de la persona: "<<endl;
	cin.sync();
	cout<<"C.I. (sin puntos ni la nacionalidad): ";  cin>>ci;
	cout<<"Ingrese edad: "; cin>>edad;
	cin.sync();
	cout<<"Ingrese nombre: "; cin.getline(nombre, 49);
	cin.sync();
	cout<<"Ingrese sexo (M/F): "; cin.get(sexo);
}

void Persona::mostrarDatos() {
	cout<<"Estos son los datos de la persona: "<<endl;
	cout<<"C.I: "<<this->ci<<endl;
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Edad: "<<this->edad<<endl;
	cout<<"Sexo: "<<((this->sexo == 'm' || this->sexo == 'M') ?"Masculino":"Femenino")<<endl;
}

Persona::~Persona() {
	cout<<"A "<<nombre<<" se lo llevo la pelona :("<<endl;
}
