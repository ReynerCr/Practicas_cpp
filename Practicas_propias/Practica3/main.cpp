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
	Hibrido *hib = new Hibrido();  
	
	//Pregunto la ocupacion de la persona.
	do {
		system("cls");
		cout<<"La persona es un trabajador y/o un estudiante?"<<endl
			<<"1. Empleado."<<endl
			<<"2. Estudiante."<<endl
			<<"3. Ambos."<<endl
			<<"4. Ninguno. "<<endl;
		cin.sync();		
		cin>>menu;
		system("cls");
		//Ahora cargo datos e imprimo
		switch (menu) {
			case 1:
				e1->cargarDatos();
				cout<<endl; system ("cls");
				e1->mostrarDatos();
				cout<<endl<<"Pues bien, es un trabajador.";
				break;
			case 2:
				es->cargarDatos();
				cout<<endl; system ("cls");
				es->mostrarDatos();
				cout<<endl<<"Bien, esfuercece todo lo que pueda en sus estudios.";
				break;
			case 3:
				hib->cargarDatos();
				cout<<endl; system ("cls");
				hib->mostrarDatos();
				cout<<endl<<"Pobre, cero tiempo.";
				break;
			case 4:
				p1->cargarDatos();
				cout<<endl; system ("cls");
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
