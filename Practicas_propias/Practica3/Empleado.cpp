#include <iostream>
#include <string.h>
#include "Empleado.h"
#include "Persona.h"

using namespace std;

Empleado::Empleado() : Persona() {
	strcpy(this->profesion, "");
	this->sueldo = 0.0;
	this->annosServicio = 0;
	this->indRendimiento=0.0;
}

Empleado::Empleado(int ci, short unsigned edad, char nombre[50], char sexo, char profesion[40], float sueldo, short unsigned annosServicio, float indRendimiento) : Persona(ci, edad, nombre, sexo) {
	strcpy(this->profesion, profesion);
	this->sueldo = sueldo;
	this->annosServicio = annosServicio;
	this->indRendimiento = indRendimiento;
}

void Empleado::cargarDatos() {
	this->Persona::cargarDatos();
	cout<<"Ingrese el nombre de la profesion: "; cin.sync(); cin.getline(profesion, 40);
	cout<<"Ingrese el sueldo: "; cin>>sueldo;
	cout<<"Ingrese el numero de annos de servicio: "; cin>>annosServicio;
	cout<<"Ingrese el indice de rendimiento: "; cin>>indRendimiento;
}

void Empleado::mostrarDatos() {
	this->Persona::mostrarDatos();
	cout<<"Profesion: "<<profesion<<endl;
	cout<<"Sueldo: "<<sueldo<<endl;
	cout<<"Annos de servicio: "<<annosServicio<<endl;
	cout<<"Indice de rendimiento: "<<indRendimiento<<endl;
}

Empleado::~Empleado() {
}
