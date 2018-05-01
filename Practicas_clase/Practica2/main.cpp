#include <iostream>	   //parentesis angulares (<>) busca en otras rutas
#include "Producto.h"  //comillas busca en el MISMO directorio y en otras rutas	
#include "Ingrediente.h"
#include "Lacteos.h"
#include "Electronicos.h"
#include <ctype.h>  //libreria de tolower y toupper

using namespace std;

int main() {
	
	//-----------------------------------------------PRODUCTO
	/*	//Producto objeto;
	Producto galleta (1, "crisp", 500.0, 'A');
	//Producto perroC(2, "dog", 'A');
	objeto.cargarDatos();
	objeto.mostrarDatos();   //Esta fue la primera prueba
	
	//Producto objeto[100];  //objeto din�mico,  se usa -> para acceder
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
		resp = tolower(cin.get());   //convertir a min�scula y toupper a may�scula; o +32 o -32
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
	}*/  //---------------------------FIN PRODUCTO
	
/*   ------------------------------------------------------------INGREDIENTE	
	//1. Crear un objeto estatico con el constructor por defecto
	Ingrediente harina();  
	
	//2. Crear un objeto estatico usando el constructor parametrico y luego se muestran los datos
	cout<<"2. ";
	Ingrediente azucar(2, "azucar", "kilo", 150000.0, 228000.0);
	azucar.mostrarDatos();
	
	//3. Crear un objeto dinamico usando el constructor por defecto, cargar sus datos y luego mostrarlos
	cout<<"3. ";
	Ingrediente *ingrediente = new Ingrediente(); 
	ingrediente->cargarDatos();
	ingrediente->mostrarDatos();
	ingrediente = NULL;
	delete ingrediente;
	
	//4. Crear un objeto dinamico usando el constructor parametrico y luego se muestran sus datos
	cout<<"4. ";
	Ingrediente *leche = new Ingrediente(4, "leche", "litro", 120000.0, 182400.0);
	leche->mostrarDatos();
	leche = NULL;
	delete leche;
	
	//5.	Crear un vector din�mico, cargar datos, mostrar datos y calcular el precio de cada ingrediente. 
	cout<<"5. ";
	Ingrediente **ingredientes = new Ingrediente *[10];
	
	for (int i=0; i<10; i++) {  //Esto no es necesario ni optimo, porque en el do while de abajo se puede declarar antes de pedir nada, pero yo solo sigo instrucciones.
		ingredientes[i] = new Ingrediente();
	} 
	
	int N=0;
	char resp;
	
	do {
		//ingredientes[N] = new Ingrediente(); ----------- esta linea hubiese ahorrrado el for de arriba
		ingredientes[N]->cargarDatos();
		N++;
		cout<<"Hay otro ingrediente? S/N   ";
		cin.sync();
		resp = tolower(cin.get());
		cout<<endl;
	} while (resp == 's' && N<10);
	system ("cls");
	
	//Libero la memoria no utilizada, no lo pide el ejercicio pero es un extra.
	if (N!=9) {
		for (int i=N; i<10; i++) {
			ingredientes[i] = NULL;
			delete ingredientes[i];
		}
	}
	
	for (int i=0; i<N; i++) {
		ingredientes[i]->calcularPrecio();
		ingredientes[i]->mostDatEnLinea();
	}*/   //-------------------------------------------------FIN INGREDIENTE
	
	
	
	cin.sync();
	cin.get();
	return 0;
}
