#include <iostream>	   //parentesis angulares (<>) busca en otras rutas
#include "Producto.h"  //comillas busca en el MISMO directorio y en otras rutas	
#include <ctype.h>  //libreria de tolower y toupper

using namespace std;

int main(int argc, char** argv) {
	//Producto objeto;
	Producto galleta (1, "crisp", 500.0, 'A');
	//Producto perroC(2, "dog", 'A');
	objeto.cargarDatos();
	objeto.mostrarDatos();   //Esta fue la primera prueba
	
	//Producto objeto[100];  //objeto dinámico,  se usa -> para acceder
	//Producto *objeto = new Producto();  //new declara espacio de memoria
	
	Producto** objeto = new Producto *[100];
	int N=0;
	char resp;
	do {
		objeto[N] = new Producto();
		objeto[N]->cargarDatos();
		N++;
		cout<<endl<<"Hay otro producto? S/N    ";
		cin.sync();
		resp = tolower(cin.get());   //convertir a minúscula y toupper a mayúscula; o +32 o -32
		system("cls");
	} while (resp=='s' && N<100);
	
	//cout<<"Se han eliminado "<<(100-N)<<" productos."<<endl<<endl;
	
	for (int i=0; i<N; i++) {
		objeto[i]->mostrarDatos();
		cout<<endl;
	}
	
	//BORRADO DE OBJETOS PARA CADENA COMPLETA:  delete [] objeto;
	for (int i=N; N<100; i++) {
		objeto[i] = NULL;
		delete objeto[i];
	}
	
	cin.sync();
	cin.get();
	return 0;
}
