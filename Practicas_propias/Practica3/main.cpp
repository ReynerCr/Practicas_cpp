#include <iostream>
#include <string.h>
#include "Empleado.h"

using namespace std;


int main() {
	int menu;
	
	//Pregunto la ocupacion de la persona.
	do {
		system("cls");
		cout<<"La persona es un trabajador y/o un empleado?"<<endl
			<<"1. Empleado."<<endl
			<<"2. Trabajador."<<endl
			<<"3. Ambos. "<<endl
			<<"4. Ninguno. "<<endl;
		cin.sync();		
		cin>>menu;
			//Ahora imprimo todo segun lo ingresado
		switch (menu) {
			case 1:
				Empleado p1();
				p1.Persona::cargarDatos();
				p1.Persona::mostrarDatos();
				cout<<"Trabaja, riko."<<endl;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			default:
				cout<<"Opcion no valida, reingrese luego de la pausa: "<<endl;
				cin.sync();
				system("pause");
				break;
		}
	} while (menu<1 || menu>4);
	

	
	cin.sync();
	cin.get();
	return 0;
}
