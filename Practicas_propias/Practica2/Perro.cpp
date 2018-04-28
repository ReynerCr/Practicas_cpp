#include <iostream>
#include <string>
#include "Perro.h"

using namespace std;

Perro::Perro() {
	nombre = "Desconocido";
	edad = 0;
	duenno = "Desconocido";
}

Perro::Perro(short unsigned _edad, string _nombre, string _duenno) {
	edad = _edad;
	nombre = _nombre;
	duenno = _duenno;
}

int Perro::getEdad() {
	return edad;
}

string Perro::getDuenno() {
	return duenno;
}

string Perro::getNombre() {
	return nombre;
}

void Perro::examinar() {
	cout<<"Nombre: "<<nombre<<"\nEdad: "<<edad<<"\nDuenno: "<<duenno<<".";
}

string Perro::despertar() {
	return nombre+" esta despertando!";
}

string Perro::comer() {
	return nombre+" esta comiendo dog chow!";
}

string Perro::bannar() {
	return nombre+" esta siendo bannado por "+duenno+"!";
}

string Perro::dormir() {
	return nombre+" esta dormido.";
}

string Perro::pasear() {
	return nombre+" pasea alegre junto a "+duenno;
}
