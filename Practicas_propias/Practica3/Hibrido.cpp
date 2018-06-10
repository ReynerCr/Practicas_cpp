#include <iostream>
#include <string.h>
#include "Hibrido.h"
#include "Empleado.h"

using namespace std;

Hibrido::Hibrido() {
	strcpy(this->horasLibres, "cero tiempo, si no da pa estudiar...");
	Estudiante::aux = true;
}

void Hibrido::cargarDatos() {
	Empleado::cargarDatos();
	Estudiante::cargarDatos();
	cout<<"Horas libres: "; cin.sync(); cin.getline(horasLibres, 29);
}

void Hibrido::mostrarDatos() {
	Empleado::mostrarDatos(); 
	Estudiante::mostrarDatos();
	cout<<"Horas libres"<<horasLibres<<endl;
}

char* Hibrido::getHorasLibres() {
	return horasLibres;
}
Hibrido::~Hibrido() {
}
