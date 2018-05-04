#include <iostream>
#include "Hexagono.h"

using namespace std;

int main() {	
	Hexagono *hexagonito = new Hexagono();
	
	hexagonito->cargarDatos();
	system("cls");
	hexagonito->mostrarDatos();
	cout<<endl;
	hexagonito->mostrarHexagono();
	hexagonito = 0;
	delete hexagonito;
	
	cin.sync();
	cin.get();
	return 0;
}
