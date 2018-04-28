#include <iostream>
#include "Datos.h"
#include <string>

using namespace std;

int main() {
	Datos persona1;
	short unsigned edad;
	char sexo;
	string nombre;
	
	cout<<"Digite el nombre: ";
	cin.sync();
	getline(cin, nombre);

	cout<<"Digite la edad: ";
	cin.sync();
	cin>>edad;
	
	cout<<"Digite el sexo (M/F): ";
	cin.sync();
	cin.get(sexo);
	while ((sexo!='F' && sexo!='f') && (sexo!='m' && sexo!='M') && (sexo!='h' && sexo!='H')) {
		cout<<"Vuelva a ingresar el sexo (M/F): ";
		cin.sync();
		cin.get(sexo);
	}

	persona1 = Datos(edad, sexo, nombre);
	system("cls");
	
	cout<<"Estos son sus datos: "<<endl<<endl;
	cout<<"Nombre: "<<persona1.getNombre()<<endl;
	cout<<"Edad: "<<persona1.getEdad()<<endl;
	cout<<"Sexo: "<<persona1.getSexo()<<endl;
	cin.sync();
	cin.get();
	return 0;
}
