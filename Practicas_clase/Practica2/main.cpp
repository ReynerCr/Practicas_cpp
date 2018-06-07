#include <iostream>	   
#include "Producto.h" 
#include "Ingrediente.h"
#include "Lacteos.h"
#include "Electronicos.h"
#include <ctype.h>  //libreria de tolower y toupper
#include <typeinfo>

using namespace std;

void carDat1Producto (int, int, Lacteos*, Electronicos*);

int main() {
	
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
						cout<<endl<<endl<<endl<<endl;
					}
				}
				else 
					cout<<"No se han cargado elementos en lacteos.";
				break;
				
			case 4:
				if (e>0) {
					for (int i=0; i<e;	 i++) {
						cout<<(i+1)<<". ";
						pElectronicos[i]->mostrarDatos();
						cout<<endl<<endl<<endl<<endl;
					}
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
					
					else { //else para comprobar si hay productos del valor ingresado
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
							P -= 1;
							if (P<0 || (M==1 ?P>=l:P>=e)) {
								cout<<"Valor no valido, reingrese luego de la pausa."<<endl;
								system("pause");
							}
							system("cls");
						} while (P<0 || (M==1 ?P>=l:P>=e)); //validacion de P
						
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
						
						if (M==1) {
							carDat1Producto(N, M, pLacteos[P], pElectronicos[P]);
						}
						else {
							carDat1Producto(N, M, pLacteos[P], pElectronicos[P]);
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
						cout<<pLacteos[i]->getCodigo()<<"\t"<<pLacteos[i]->getNombre()<<"\t"<<pLacteos[i]->getPrecio()<<"\t"<<pLacteos[i]->getEstado()<<"\tLacteo\t"<<pLacteos[i]->getCanIngredientes();
						if (pLacteos[i]->getCanIngredientes()>0) {
							cout<<"\t"<<pLacteos[i]->getNomFormula(0)<<endl;
							for (int j=1; j<pLacteos[i]->getCanIngredientes(); j++) {
								cout<<"\t\t\t\t\t\t"<<pLacteos[i]->getNomFormula(j)<<endl;
							}
						}
						else
							cout<<endl;
					}
					
					for (int i=0; i<e; i++) { 	//Reporte de los elementos de electronicos
						cout<<pElectronicos[i]->getCodigo()<<"\t"<<pElectronicos[i]->getNombre()<<"\t"<<pElectronicos[i]->getPrecio()<<"\t"<<pElectronicos[i]->getEstado()<<"\tElectronico\t"<<pElectronicos[i]->getCanIngredientes();
						if (pElectronicos[i]->getCanIngredientes()>0) {
							cout<<"\t"<<pElectronicos[i]->getNomFormula(0)<<endl;
							for (int j=1; j<pElectronicos[i]->getCanIngredientes(); j++) {
								cout<<"\t\t\t\t\t\t"<<pElectronicos[i]->getNomFormula(j)<<endl;
							}
						}
						else
							cout<<endl;
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
	} while (menu!=7);
	return 0;
}

void carDat1Producto (int N, int M, Lacteos *lac, Electronicos *elec) {
	int aux;
	float auxf;
	char nom[49];
	char letra;
	Ingrediente ing;
	Producto *prod;
	if (M==1) {
		prod = lac;
	}
	else {
		prod = elec;
	}
	
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
			prod->setEstado(letra);
			break;
		case 5:
			do {
				cout<<"Ingrese cantidad de ingredientes de "<<prod->getNombre()<<": ";
				cin.sync(); cin>>aux;
				if (aux<0) {
					cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
					system("pause");
				}
				system("cls");
			} while (aux<0);
			prod->setCanIngredientes(aux);
			break;
		case 6:
			if (prod->getCanIngredientes()>0) {
				do {
					cout<<"Que ingrediente desea cambiar? "<<endl;
					for (int i=0; i<prod->getCanIngredientes(); i++) {
						cout<<(i+1)<<". "<<prod->getNomFormula(i)<<endl;
					}
					cin.sync(); cin>>aux;
					if (aux<0 || aux>prod->getCanIngredientes()) {
						cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
						system("pause");
					}
					system("cls");
				} while (aux<0 || aux>prod->getCanIngredientes());
				ing.cargarDatos();
				aux -= 1;
				prod->setFormulaIO(aux, ing);
			}
			else
				cout<<"El producto no tiene ingredientes.";
			break;
		case 7:
			switch (M) {
				case 1:
					cout<<"Ingrese la caducidad de "<<prod->getNombre()<<": ";
					cin.sync(); cin.getline(nom, 10);
					lac->setCaducidad(nom);
					break;
				case 2:
					do {
						cout<<"Ingrese el voltaje de "<<prod->getNombre()<<": ";
						cin.sync(); cin>>aux;
						if (aux<=0) {
							cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
							system("pause");
						}	
						system("cls");
						elec->setVoltaje(aux);
					} while (aux<0);
					break;
			}
			break;
		case 8:
			prod->cargarDatos();
			break;
	}
}// carDat1Producto
