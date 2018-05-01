#include "Estudiante.h"
#include "Persona.h"
#include <iostream>

using namespace std;

Estudiante::Estudiante() {
	this->semestre = 0;
	this->numeroMaterias = 0;
	this->promedio = 0.0;
}

Estudiante::Estudiante(int ci, short unsigned edad, char nombre[49], char sexo, int semestre, int numeroMaterias, float promedio) : Persona(ci, edad, nombre, sexo){
	this->semestre = semestre;
	this->numeroMaterias = numeroMaterias;
	this->promedio = promedio;
}	
	
void Estudiante::cargarDatos() {
	this->Persona::cargarDatos();
	cout<<"Semestre: "; cin.sync(); cin>>this->semestre;
	cout<<"Numero de materias: "; cin.sync();  cin>>this->numeroMaterias;
	cout<<"Promedio: "; cin.sync(); cin>>this->promedio;
}	

void Estudiante::mostrarDatos() {
	this->Persona::mostrarDatos();
	cout<<"Semestre: "<<semestre<<endl;
	cout<<"Numero de materias: "<<numeroMaterias<<endl;
	cout<<"Promedio: "<<promedio<<endl;
}	

Estudiante::Estudiante::~Estudiante() {
}
