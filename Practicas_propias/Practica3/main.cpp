#include <iostream>
#include <string.h>
#include "Empleado.h"
#include "Estudiante.h"
#include "Hibrido.h"

using namespace std;


int main() {
	int menu;
	Persona *p1 = new Persona();
	Empleado *e1 = new Empleado();
	Estudiante *es = new Estudiante();	
	Hibrido *hib = new Hibrido();  //Aqui hay un detallito bien feo, se corregirlo pero me da pereza.
	
	//Pregunto la ocupacion de la persona.
	do {
		system("cls");
		cout<<"La persona es un trabajador y/o un estudiante?"<<endl
			<<"1. Empleado."<<endl
			<<"2. Estudiante."<<endl
			<<"3. Ambos (CON DETALLITOS). "<<endl  //Detallitos: algo no funcional como debería
			<<"4. Ninguno. "<<endl;
		cin.sync();		
		cin>>menu;
		system("cls");
		//Ahora imprimo todo segun lo ingresado
		switch (menu) {
			case 1:
				e1->cargarDatos();
				cout<<endl;
				e1->mostrarDatos();
				cout<<endl<<"Pues bien, es un trabajador.";
				break;
			case 2:
				es->cargarDatos();
				cout<<endl;
				es->mostrarDatos();
				cout<<endl<<"Bien, esfuercece todo lo que pueda en sus estudios.";
				break;
			case 3:
				hib->cargarDatos();
				cout<<endl;
				hib->mostrarDatos();
				cout<<endl<<"Pobre, cero tiempo.";
				break;
			case 4:
				p1->cargarDatos();
				cout<<endl;
				p1->mostrarDatos();
				cout<<endl<<"Vago, trabaje o algo, no lo van a matener toda la vida.";
				break;
			default:
				cout<<"Opcion no valida, reingrese luego de la pausa: "<<endl;
				cin.sync();
				system("pause");
				break;
		}//switch menu
	} while (menu<1 || menu>4);
	
	p1 = NULL; delete p1;
	e1 = NULL; delete e1;
	es = NULL; delete es;	
	
	cin.sync();
	cin.get();
	return 0;
}
