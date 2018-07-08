#include "Informacion.h"
#include <string.h>

using namespace std;



Informacion::Informacion() {
	strcpy (datos1[0], "123456-Maria");
	strcpy (datos1[1], "654321-Jose");
	strcpy (datos1[2], "789123-Luisa");
	
	strcpy (datos2[0], "654321-123456789");
	strcpy (datos2[1], "789123-456789");
	strcpy (datos2[2], "123456-314567890");
}

int Informacion::getLongitud1() {
	int longitud = sizeof(datos1)/sizeof(*datos1);
}

int Informacion::getLongitud2() {
	int longitud = sizeof(datos2)/sizeof(*datos2);
}

char * Informacion::getDatos1(int i) {
	if (i>=0 && i<this->getLongitud1())
		return datos1[i];
	else
		return 0;
}

char * Informacion::getDatos2(int i) {
	if (i>=0 && i<this->getLongitud2())
		return datos2[i];
	else
		return 0;
}

Informacion::~Informacion() {
}
