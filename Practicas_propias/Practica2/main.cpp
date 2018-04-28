#include <iostream>
#include <string>
#include "Perro.h"

using namespace std;

int main() {
	short unsigned edad;
	char resp;
	string nombre, duenno;
	
	cout<<"Ingrese los datos del perro: "<<endl<<endl;
	cout<<"Nombre: ";
	cin.sync();
	getline(cin, nombre);
	
	cout<<"Edad: ";
	cin.sync();
	cin>>edad;
	while (edad<1 || edad>50) {
		cout<<"Wow, esa edad no es posible ni permitida, reingrese: ";
		cin.sync();
		cin>>edad;
	}
	
	cout<<"Duenno: ";
	cin.sync();
	getline(cin, duenno);
	
	system ("cls");
	Perro perro1 = Perro(edad, nombre, duenno);
	
	do {
		short opcion=0;
		resp='s';
		cout<<"Estas son las acciones que "<<perro1.getNombre()<<" puede realizar: "<<endl
			<<"1. Examinar."<<endl
			<<"2. Despertar."<<endl
			<<"3. Comer."<<endl
			<<"4. Bannar."<<endl
			<<"5. Pasear."<<endl
			<<"6. Dormir."<<endl;
		cin.sync();
		cin>>opcion;
		cout<<endl;
		switch (opcion) {
			case 1: 
				perro1.examinar();
				break;
			case 2:
				cout<<perro1.despertar();
				break;
			case 3:
				cout<<perro1.comer();
				break;
			case 4:
				cout<<perro1.bannar();
				break;
			case 5:
				cout<<perro1.pasear();
				break;
			case 6:
				cout<<perro1.dormir();
				break;
			default: 
				cout<<endl<<"No es una opcion valida, el menu se reiniciara luego de la pausa."<<endl;
				cin.sync();
				system ("pause");
				break;
		}//switch
		
		if (opcion>=1 && opcion<=6) {
			cout<<endl<<"Desea que "+perro1.getNombre()+" realice otra accion? S/N   ";
			cin.sync();
			cin.get(resp);
		}
		
		system("cls");
	} while (resp=='s' || resp=='S');
	
	perro1.~Perro();
	cin.sync();
	cin.get();
	return 0;
}
