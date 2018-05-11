#include <iostream>	   //parentesis angulares (<>) busca en otras rutas
#include "Producto.h"  //comillas busca en el MISMO directorio y en otras rutas	
#include "Ingrediente.h"
#include "Lacteos.h"
#include "Electronicos.h"
#include <ctype.h>  //libreria de tolower y toupper

using namespace std;

void carDat1ProdLacteo (int, Lacteos*);
void carDat1ProdElectronico (int, Electronicos*);

int main() {
	
	//-----------------------------------------------PRODUCTO
	/*	//Producto objeto;
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
	}*/  //---------------------------FIN PRIMERA CLASE, PRODUCTO
	
	
/*   ------------------------------------------------------------ PRACTICAINGREDIENTE	
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
	
	//5.	Crear un vector dinámico, cargar datos, mostrar datos y calcular el precio de cada ingrediente. 
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
	}*/   //-------------------------------------------------FIN PRACTICA INGREDIENTE
	
	/*
	// Constructor sin pasar objeto
	Producto *reloj = new Producto(6, "Reloj", 100000.00, 'n', 5);
	reloj->mostrarDatos();
	reloj = 0;
	delete reloj;
	//---------------
	cin.sync();
	cout<<endl;
	system("pause");
	system("cls");
	// Constructor parametrico pasando objetos
	Ingrediente **ingTorta;
	ingTorta = new Ingrediente *[1];
	Producto *torta = new Producto(1, "Torta", 20000.00, 'a', 1, ingTorta);
	torta->mostrarDatos();
	
	torta = 0;
	delete torta;
	
	for (int i=0; i<sizeof(ingTorta); i++) {
		ingTorta[i]=NULL;
		delete ingTorta[i];
	}
	//---------------
	int p;
	
	cout<<endl;
	cin.sync();
	system("pause");
	system("cls");
	// Llenado con cargarDatos desde main
	Producto *computadora = new Producto();
	computadora->cargarDatos();
	cout<<endl;
	computadora->mostrarDatos();
	
	cout<<endl;
	cin.sync();
	system("pause");
	system("cls");
	
	//no hay validacion, cambiar los datos de una posicion del vector
	cout<<"Ingrese la posicion que desee modificar del vector: "; cin.sync(); cin>>p;
	Ingrediente *remplazo = new Ingrediente(p, "raton", "cm", 100000.00, 130000.00);
	cout<<endl;
	computadora->setFormulaI(p, remplazo);
	system("cls");
	
	//no hay validacion, mostrar los datos de una posicion del vector
	cout<<"Ingrese la posicion que desee ver del vector: "; cin.sync(); cin>>p;
	cout<<endl;
	computadora->getFormulaI(p)->mostDatEnLinea();
	
	computadora = 0;
	delete computadora;
	//--------------- FIN
	*/
	
	//l=iterador de lacteos; e=interador de electronicos;  L=cantidad de elemento lacteos; E=cantidad de elemento electros; N= variable para switchs
	//menus=menu principal; M=variable para los submenus; P=Producto a modificar
	int N, l=0, e=0, L, E, M, P, menu;
	Lacteos **pLacteos;
	Electronicos **pElectronicos;
	
	cout<<"Ingrese la cantidad de elementos que contendra el vector de lacteos: "; cin.sync(); cin>>L;
	while (L<=0) {
		cout<<endl<<"Reingrese la cantidad de elementos de lacteos: "; cin.sync(); cin>>L;		
	}//validacion de L
	pLacteos = new Lacteos *[L];
	system("cls");
	
	cout<<"Ingrese la cantidad de elementos que contendra el vector de electronicos: "; cin.sync(); cin>>E;
	while (E<=0) {
		cout<<endl<<"Reingrese la cantidad de elementos de electronicos: "; cin.sync(); cin>>E;	
	}//validacion de E
	pElectronicos = new Electronicos *[E]; 	
 
	do {
		system("cls");
		cout<<"1. Cargar datos de un lacteo."<<endl
			<<"2. Cargar datos de un electronico."<<endl
			<<"3. Mostrar datos de lacteos."<<endl
			<<"4. Mostrar datos de electronicos"<<endl
			<<"5. Modificar algun dato de alguna posicion de un vector."<<endl
			<<"6. Reporte de todos los productos."<<endl
			<<"7. Salir"<<endl;
			
		cin.sync();
		cin>>menu;
		
		system("cls");
		switch (menu) {
			case 1:
				if (l<L) {
					cout<<"Cargados "<<l<<" de "<<L<<" elementos."<<endl;
					pLacteos[l] = new Lacteos();
					pLacteos[l]->cargarDatos();
					l++;
				}
				else 
					cout<<"El vector de lacteos ya esta lleno.";
				
				break;
				
			case 2:
				if (e<E) {
					cout<<"Cargados "<<e<<" de "<<L<<" elementos."<<endl;
					pElectronicos[e] = new Electronicos();
					pElectronicos[e]->cargarDatos();
					e++;
				}
				else 
					cout<<"El vector de electronicos ya esta lleno.";
				break;
				
			case 3:
				if (l>0) {
					for (int i=0; i<l; i++) {
						cout<<(i+1)<<". ";
						pLacteos[i]->mostrarDatos();
					}
					cout<<endl<<endl;
				}
				else 
					cout<<"No se han cargado elementos en lacteos.";
				break;
				
			case 4:
				if (e>0) {
					for (int i=0; i<e; i++) {
						pElectronicos[i]->mostrarDatos();
					}
					cout<<endl<<endl;
				}
				else  
					cout<<"No se han cargado elementos en electronicos.";
				break;
				
			case 5:
				if (l==0 && e==0) {
					cout<<"No hay ningun producto registrado para poder cambiarlo."<<endl;
				} //if y else para comprobar si hay al menos 1 producto
				else {
					do {  //Menu para preguntar tipo de producto
						cout<<"Que desea modificar?"<<endl
							<<"1. Lacteos."<<endl
							<<"2. Electronicos."<<endl;
						cin.sync(); cin>>M;
						if (M<1 || M>2) {
							cout<<"Valor no valido, reingrese luego de la pausa."<<endl;
							system("pause");
						}//if
						system("cls");
					 } while (M<1 || M>2); //validacion de M
					 
					if (M==1 && l==0) {
						cout<<"No hay lacteos registrados."<<endl;
					}
					
					else if (M==2 && e==0) {
						cout<<"No hay electronicos registrados."<<endl;
					}
					
					else { //else para comproar si hay productos del valor ingresado
						do {
							cout<<"Cual de los productos desea modificar?"<<endl<<endl;
							if (M==1) {
								for (int i=0; i<l; i++) {
									cout<<(i+1)<<". "<<pLacteos[i]->getNombre()<<endl;
								}//for para imprimir todos los nombres de electronicos
							}
							
							else {
								for (int i=0; i<e; i++) {
									cout<<(i+1)<<". "<<pElectronicos[i]->getNombre()<<endl;
								}//for para imprimir todos los nombres de electronicos
							}
							
							cin.sync();
							cin>>P;
							if (P<1 || (M==1 ?P>l:P>e)) {
								cout<<"Valor no valido, reingrese luego de la pausa."<<endl;
								system("pause");
							}
							system("cls");
						} while (P<1 || (M==1 ?P>l:P>e)); //validacion de P
						
						do { //Menu para preguntar cual atributo modificar
							cout<<"Que atributo desea modificar?"<<endl
								<<"1. Codigo."<<endl
								<<"2. Nombre."<<endl
								<<"3. Precio."<<endl
								<<"4. Estado."<<endl
								<<"5. Cantidad de ingredientes."<<endl
								<<"6. Ingrediente."<<endl;
								cout<<(M==1 ?"7. Caducidad.":"7. Voltaje.")<<endl;
								cout<<"8. Todo."<<endl;
								cin.sync(); cin>>N;
								if (N<1 || N>8) {
									cout<<"Valor no valido, reingrese luego de la pausa."<<endl;
									system("pause");
								}
								system("cls");
						} while (N<1 || N>8);
						
						//esto no funciona
						if (M==1) {
							carDat1ProdLacteo(N, pLacteos[P]);
						}
						else {
							carDat1ProdElectronico(N, pElectronicos[P]);
						}
					}//else para comprobar si hay produtos del valor ingresado 
				}//else para comprobar si existe al menos 1 producto
				break;
			
			case 6:
				if (e==0 && l==0) {
					cout<<"No se han cargado elementos.";
				}
				else {
					for (int i=0; i<l; i++)  { //Reporte de los elementos de lacteos
						cout<<pLacteos[i]->getCodigo()<<"\t"<<pLacteos[i]->getNombre()<<"\t"<<pLacteos[i]->getPrecio()<<"\t"<<pLacteos[i]->getEstado()<<"\tLacteo\t"<<pLacteos[i]->getCanIngredientes()<<"\t"<<pLacteos[i]->getNomFormula(0)<<endl;
						for (int j=1; j<pLacteos[i]->getCanIngredientes(); j++) {
							cout<<"\t\t\t\t\t"<<pLacteos[i]->getNomFormula(j)<<endl;
						}
					}
					
					for (int i=0; i<e; i++) { 	//Reporte de los elementos de electronicos
						cout<<pElectronicos[i]->getCodigo()<<"\t"<<pElectronicos[i]->getNombre()<<"\t"<<pElectronicos[i]->getPrecio()<<"\t"<<pElectronicos[i]->getEstado()<<"\tElectronico\t"<<pElectronicos[i]->getCanIngredientes()<<"\t"<<pElectronicos[i]->getNomFormula(0)<<endl;
						for (int j=1; j<pElectronicos[i]->getCanIngredientes(); j++) {
							cout<<"\t\t\t\t\t"<<pElectronicos[i]->getNomFormula(j)<<endl;
						}
					}	
				}
				break;
				
			case 7: //salir, necesario el break para que no entre en default.
				break;
				
			default:
				cout<<"Valor no valido, reingrese después de la pausa.";
				break;
		}//switch
		cin.sync(); 
		cout<<endl;
		system("pause");
	} while (M!=7);
	return 0;
}

void carDat1ProdLacteo (int N, Lacteos *prod) {
	int aux;
	float auxf;
	char nom[49];
	char letra;
	Ingrediente ing;
	switch (N) {
		case 1:
			cout<<"Ingrese codigo de "<<prod->getNombre()<<": ";
			cin.sync(); cin>>aux;
			prod->setCodigo(aux);
			break;
		case 2:
			cout<<"Ingrese nuevo nombre de "<<prod->getNombre()<<": ";
			cin.sync(); cin.getline(nom, 49);
			prod->setNombre(nom);
			break;
		case 3:
			cout<<"Ingrese precio de "<<prod->getNombre()<<": ";
			cin.sync(); cin>>auxf;
			prod->setPrecio(auxf);
			break;
		case 4:
			cout<<"Ingrese estado de "<<prod->getNombre()<<": ";
			cin.sync(); letra = tolower(cin.get());
			prod->setPrecio(letra);
			break;
		case 5:
			cout<<"Ingrese cantidad de ingredientes de "<<prod->getNombre()<<": ";
			cin.sync(); cin>>aux;
			prod->setCanIngredientes(aux);
			break;
		case 6:
			do {
				cout<<"Que ingrediente desea cambiar? "<<endl;
				for (int i=0; i<prod->getCanIngredientes(); i++) {
					cout<<(i+1)<<". "<<prod->getNomFormula(i)<<endl;
				}
				cin.sync(); cin>>aux;
				if (aux<0 || aux>prod->getCanIngredientes()) {
					cout<<"Valor no valido, reingrese despues de la pausa.";
					system("pause");
				}
			} while (aux<0 || aux>prod->getCanIngredientes());
			prod->setFormulaIO(aux, ing);
			break;
		case 7:
			cout<<"Ingrese la caducidad de "<<prod->getNombre()<<": ";
			cin.sync(); cin.getline(nom, 10);
			prod->setCaducidad(nom);
			break;
		case 8:
			prod->cargarDatos();
			break;
	}
}// carDat1Producto

void carDat1ProdElectronico (int N, Electronicos *prod) {
	int aux;
	float auxf;
	char nom[49];
	char letra;
	Ingrediente ing;
	switch (N) {
		case 1:
			cout<<"Ingrese codigo de "<<prod->getNombre()<<": ";
			cin.sync(); cin>>aux;
			prod->setCodigo(aux);
			break;
		case 2:
			cout<<"Ingrese precio de "<<prod->getNombre()<<": ";
			cin.sync(); cin>>auxf;
			prod->setPrecio(auxf);
			break;
		case 3:
			cout<<"Ingrese nuevo nombre de "<<prod->getNombre()<<": ";
			cin.sync(); cin.getline(nom, 49);
			prod->setNombre(nom);
			break;
		case 4:
			cout<<"Ingrese estado de "<<prod->getNombre()<<": ";
			cin.sync(); letra = tolower(cin.get());
			prod->setPrecio(letra);
			break;
		case 5:
			cout<<"Ingrese cantidad de ingredientes de "<<prod->getNombre()<<": ";
			cin.sync(); cin>>aux;
			prod->setCanIngredientes(aux);
			break;
		case 6:
			do {
				cout<<"Que ingrediente desea cambiar? "<<endl;
				for (int i=0; i<prod->getCanIngredientes(); i++) {
					cout<<(i+1)<<". "<<prod->getNomFormula(i)<<endl;
				}
				cin.sync(); cin>>aux;
				if (aux<0 || aux>prod->getCanIngredientes()) {
					cout<<"Valor no valido, reingrese despues de la pausa.";
					system("pause");
				}
			} while (aux<0 || aux>prod->getCanIngredientes());
			prod->setFormulaIO(aux, ing);
			break;
		case 7:
			cout<<"Ingrese el voltaje de "<<prod->getNombre()<<": ";
			cin.sync(); cin>>aux;
			prod->setVoltaje(aux);
			break;
		case 8:
			prod->cargarDatos();
			break;
	}
}// carDat1ProdElectronico
