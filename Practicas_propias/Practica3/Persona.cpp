#include <iostream>
#include <string.h>
#include "Persona.h"

using namespace std;

Persona::Persona() {
	this->ci = 0;
	strcpy (nombre, "");
	this->edad = 0;
	this->sexo = ' ';
	this->aux = false;
}

Persona::Persona(int ci, short unsigned edad, char nombre[50], char sexo) {
	this->ci = ci;
	strcpy(this->nombre, nombre);
	this->edad = edad;
	this->sexo = sexo; 
	this->aux = false;
}

void Persona::cargarDatos() {
	cout<<"Ingrese los datos de la persona: "<<endl;
	cout<<"C.I. (sin puntos ni la nacionalidad): "; cin.sync(); cin>>ci;
	while (ci<=0) {
		cout<<"\tC.I no valida, reingrese: ";
		cin.sync(); cin>>ci;
	}
	cout<<"Ingrese edad: "; cin.sync(); cin>>edad;
	cout<<"Ingrese nombre: "; cin.sync(); cin.getline(nombre, 49);
	cout<<"Ingrese sexo (M/F): "; cin.sync(); cin.get(sexo);
	cout<<endl;
}

void Persona::mostrarDatos() {
	cout<<"Estos son los datos de la persona: "<<endl;
	cout<<"C.I: "<<this->ci<<endl;
	cout<<"Nombre: "<<this->nombre<<endl;
	cout<<"Edad: "<<this->edad<<endl;
	cout<<"Sexo: "<<((this->sexo == 'm' || this->sexo == 'M') ?"Masculino":"Femenino")<<endl<<endl;
}

Persona::~Persona() {
	cout<<"A "<<nombre<<" se lo llevo la pelona :("<<endl;
}
