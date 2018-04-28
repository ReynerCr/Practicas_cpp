#include <iostream>
#include <string.h>
#include "Empleado.h"

using namespace std;

Empleado() : Persona() {
	strcpy(this->profesion, "");
	this->sueldo = 0.0;
	this->annosServicio = 0;
	this->indRendimiento=0.0;
}

Empleado(char profesion[40], float sueldo, short unsigned annosServicio, float indRendimiento) : Persona(int, short unsigned, char [], char) {
	strcpy(this->profesion, profesion);
	this->sueldo = sueldo;
	this->annosServicio = annosServicio;
	this->indRendimiento = indRendimiento;
}

void Persona::cargarDatos() {
	cout<<"Ingrese el nombre de la profesion: "; cin.getline(profesion, 40);
	cout<<"Ingrese el sueldo: "; cin>>sueldo;
	cout<<"Ingrese el numero de annos de servicio: "; cin>>annosServicio;
	cout<<"Ingrese el indice de rendimiento: "; cin>>indRendimiento;
	
	cout<<endl;
}

void Persona::mostrarDatos() {
	
	cout<<"Profesion: "<<profesion<<endl;
	cout<<"Sueldo: "<<sueldo<<endl;
	cout<<"Annos de servicio: "<<annosServicio<<endl;
	cout<<"Indice de rendimiento: "<<indRendimiento;
}
