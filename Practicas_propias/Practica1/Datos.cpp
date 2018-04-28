#include <string>
#include <iostream>
#include "Datos.h"

using namespace std;

Datos::Datos() {
	edad = 0;
	sexo = ' ';
	nombre = "Desconocido.";
}

Datos::Datos(int _edad, char _sexo, string _nombre){
	edad = _edad;
	sexo = _sexo;
	nombre = _nombre;
}





