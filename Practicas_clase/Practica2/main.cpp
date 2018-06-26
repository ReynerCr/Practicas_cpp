#include <iostream>	   
#include "Producto.h" 
#include "Ingrediente.h"
#include "Lacteos.h"
#include "Electronicos.h"
#include <ctype.h>  //libreria de tolower y toupper
#include <typeinfo>

using namespace std;

int detPosProducto(int, int, Producto **);
void codigoRepetido(Producto **, int, int, int); //Evitar que se repitan los codigos de los productos
void carDat1Producto (int, int, Producto **, int);

const int TAM = 5;

int main() {
	
	//L=cantidad de elemento lacteos; E=cantidad de elementos electronicos; N=variable para switchs
	//menus=menu principal; M=variable para los submenus; P=producto a modificar, o auxiliar;
	int N, M, P=0, menu;  //variable de menus
	int L=0, E=0;
	Producto *Productos[TAM];
 	
	do {
		cout<<"1. Cargar datos de un lacteo."<<endl
			<<"2. Cargar datos de un electronico."<<endl
			<<"3. Mostrar datos de lacteos."<<endl
			<<"4. Mostrar datos de electronicos"<<endl
			<<"5. Modificar algun dato de un producto."<<endl
			<<"6. Modificar algun dato de un producto ingresando el codigo."<<endl
			<<"7. Reporte de todos los productos."<<endl
			<<"8. Recuento de elementos ingresados."<<endl
			<<"9. Salir."<<endl;
			
		cin.sync();
		cin>>menu;
		
		system("cls");
		switch (menu) {
			case 1:
				P = L + E;
				if (P<TAM) {
					Productos[P] = new Lacteos;
					L++;
					Productos[P]->cargarDatos();
					codigoRepetido(Productos, P, L, E);
				}
				else 
					cout<<"Vector lleno.";
					
				break;
				
			case 2:
				P = L + E;
				if (P<TAM) {
					Productos[P] = new Electronicos;
					E++;
					Productos[P]->cargarDatos();
					codigoRepetido(Productos, P, L, E);
				}
				else 
					cout<<"Vector lleno.";
				break;
				
			case 3:
				if (L>0) {
					int i=0, aux=0;
					while (aux<L && i<TAM) {
						if (typeid (*Productos[i]) == typeid (Lacteos)) {
							cout<<(aux+1)<<". ";
							Productos[i]->mostrarDatos();
							cout<<endl<<endl<<endl<<endl;
							aux++;
						}//if typeid
						i++;
					}//while
				}//if L
				else 
					cout<<"No se han cargado elementos lacteos.";
				break;
				
			case 4:
				if (E>0) {
					int i=0, aux=0;
					while (aux<E && i<TAM) {
						if (typeid (*Productos[i]) == typeid (Electronicos)) {
							cout<<(aux+1)<<". ";
							Productos[i]->mostrarDatos();
							cout<<endl<<endl<<endl<<endl;
							aux++;
						}//if typeid
						i++;
					}//while
				}//if E
				else  
					cout<<"No se han cargado elementos electronicos.";
				break;
				
			case 5:
				if (L==0 && E==0) {
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
					 
					if (M==1 && L==0) {
						cout<<"No hay lacteos registrados."<<endl;
					}
					
					else if (M==2 && E==0) {
						cout<<"No hay electronicos registrados."<<endl;
					}
					
					else {
						do {
							cout<<"Cual de los productos desea modificar?"<<endl<<endl;
							int i=0, aux=0;
							
							if (M==1) {
								while (aux<L && i<TAM) {
									if (typeid (*Productos[i]) == typeid (Lacteos)) {
										cout<<(aux+1)<<". "<<Productos[i]->getNombre()<<endl;
										aux++;
									}//if typeid
									i++;
								}//while
							}//else M==1
							else {
								while (aux<E && i<TAM) {
									if (typeid (*Productos[i]) == typeid (Electronicos)) {
										cout<<(aux+1)<<". "<<Productos[i]->getNombre()<<endl;
										aux++;
									}//if typeid
									i++;
								}//while
							}//else M==2
							
							cin.sync();
							cin>>P;
							P--;
							
							if (P<0 || (M==1 ?P>=L:P>=E)) {
								cout<<"Valor no valido, reingrese luego de la pausa."<<endl;
								system("pause");
							}
							system("cls");
						} while (P<0 || (M==1 ?P>=L:P>=E)); //validacion de P
						
						P = detPosProducto(P, M, Productos);
						
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
						carDat1Producto(N, M, Productos, P);
						
						if (N==1) {
							codigoRepetido(Productos, P, L, E);
						}
					}//else para comprobar si hay produtos del valor ingresado 
				}//else para comprobar si existe al menos 1 producto
				break;
			
			case 6:
				if (L==0 && E==0) {
					cout<<"No hay ningun producto registrado para poder cambiarlo."<<endl;
				} //if y else para comprobar si hay al menos 1 producto
				else {
					do {
						cout<<"Ingrese el codigo del producto que desesa modificar: "; cin.sync(); cin>>P;
						if (P<0) {
							cout<<"Codigo no valido, reingrese luego de la pausa."<<endl;
							system("pause");
						}
						system("cls");
					} while (P<0);
					
					N=0;
					while ((N<(L+E)) && (Productos[N]->getCodigo()!=P)){
						N++;
					}
					
					if (P==Productos[N]->getCodigo()) {
						P = N;
						(typeid(*Productos[P])==typeid(Lacteos)? M=1:M=2);
						
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
						carDat1Producto(N, M, Productos, P);
						if (N==1) {
							codigoRepetido(Productos, P, L, E);
						}
					}//if de codigo encontrado
					else {
						cout<<"No se encuentra producto con el codigo ingresado."<<endl;
					}
				}//else de comprobación de vector no vacío
				break;
			
			case 7:
				if (E==0 && L==0) {
					cout<<"No se han cargado elementos.";
				}
				else {
					for (int i=0; i<(L+E); i++)  { //Reporte de los elementos de lacteos
						if (Productos[i]->getCodigo() >= 0) {
							cout<<Productos[i]->getCodigo()<<"\t"<<Productos[i]->getNombre()<<"\t"<<Productos[i]->getPrecio()<<"\t"<<Productos[i]->getEstado()<<(typeid (*Productos[i]) == typeid (Lacteos) ?"\tLacteo\t":"\tElectronico\t")<<Productos[i]->getCanIngredientes();
							if (Productos[i]->getCanIngredientes()>0) {
								cout<<"\t"<<Productos[i]->getNomFormula(0)<<endl;
								for (int j=1; j<Productos[i]->getCanIngredientes(); j++) {
									cout<<"\t\t\t\t\t\t\t"<<Productos[i]->getNomFormula(j)<<endl;
								}
							}
							else
								cout<<endl;
							cout<<endl;
						}//validacion para no imprimir productos no cargados
					}//for
				}//else
				break;
				
			case 8:
				cout<<"El numero de elementos lacteos actual es "<<L<<"."<<endl
					<<"El numero de elementos electronicos actual es "<<E<<"."<<endl
					<<"El numero de elementos ingresados al vector es "<<(E+L)<<".";
				break;	
				
			case 9: 
				cout<<"Que tenga buen dia, tarde o noche.";
				break;
				
			default:
				cout<<"Valor no valido, reingrese después de la pausa.";
				break;
		}//switch
		cout<<endl;
		cin.sync();
		system("pause");
		system("cls");
	} while (menu!=9);
	return 0;
}

int detPosProducto(int v, int m, Producto *vector[TAM]) {
	int p, aux=0;
	for (p=0; p<TAM; p++) {
		if (typeid (*vector[p]) == typeid (Lacteos)) {
			if (m == 1) {
				if (aux == v)
					return p;
				aux++;
			}//if menu 1
		}//if typeid
		else {
			if (m == 2) {
				if (aux == v)
					return p;
				aux++;
			}//if menu 2
		}//else if typeid
	}//for p
}//detPosProducto

void codigoRepetido(Producto *vector[TAM], int p, int L, int E) {
	int i=0, codigo;
	//FALLO HORRIBLE, NO COMPARA CODIGOS SI SON DE DISTINTO TIPO DE PRODUCTO
	while (i<(L+E) && vector[p]->getCodigo()!=vector[i]->getCodigo()) { //estoy segurisimo de que se pueden mejorar pero asi sirve
		if ((i+1)!=p && (i+1)<(L+E)) {
			i++;
		}
		else if ((i+1)==p && (i+2)<(L+E)) {
			i += 2;
		}
		else {
			i=(L+E)-1;
		}
	}
	
	if (p!=i && vector[p]->getCodigo()==vector[i]->getCodigo()) {
		cout<<"Codigo repetido, reingrese el codigo: ";
		do {
			cin.sync(); cin>>codigo;
			if (codigo<0) {
				cout<<"\tCodigo debe ser mayor a cero, reingrese: ";
			}
		} while (codigo<0); 
		vector[p]->setCodigo(codigo);
		system("cls");
		codigoRepetido(vector, p, L, E);
	}
	
}//codigoRepetido

void carDat1Producto (int N, int M, Producto *vector[TAM], int P) {
	int aux;
	float auxf;
	char nom[49];
	char letra;
	Ingrediente ing;	
	
	switch (N) {
		case 1:
			cout<<"Ingrese codigo de "<<vector[P]->getNombre()<<": ";
			do {
				cin.sync(); cin>>aux;
				if (aux<0) 
					cout<<"\tCodigo debe ser mayor o igual a cero, reingrese: ";			
			} while (aux<0);
			vector[P]->setCodigo(aux);
			break;
		case 2:
			cout<<"Ingrese nuevo nombre de "<<vector[P]->getNombre()<<": ";
			cin.sync(); cin.getline(nom, 49);
			vector[P]->setNombre(nom);
			break;
		case 3:
			cout<<"Ingrese precio de "<<vector[P]->getNombre()<<": ";
			cin.sync(); cin>>auxf;
			vector[P]->setPrecio(auxf);
			break;
		case 4:
			cout<<"Ingrese estado de "<<vector[P]->getNombre()<<": ";
			cin.sync(); letra = tolower(cin.get());
			vector[P]->setEstado(letra);
			break;
		case 5:
			do {
				cout<<"Ingrese cantidad de ingredientes de "<<vector[P]->getNombre()<<": ";
				cin.sync(); cin>>aux;
				if (aux<0) {
					cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
					system("pause");
				}
				system("cls");
			} while (aux<0);
			vector[P]->setCanIngredientes(aux);
			break;
		case 6:
			if (vector[P]->getCanIngredientes()>0) {
				do {
					cout<<"Que ingrediente desea cambiar? "<<endl;
					for (int i=0; i<vector[P]->getCanIngredientes(); i++) {
						cout<<(i+1)<<". "<<vector[P]->getNomFormula(i)<<endl;
					}
					cin.sync(); cin>>aux;
					if (aux<0 || aux>vector[P]->getCanIngredientes()) {
						cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
						system("pause");
					}
					system("cls");
				} while (aux<0 || aux>vector[P]->getCanIngredientes());
				ing.cargarDatos();
				aux -= 1;
				vector[P]->setFormulaIO(aux, ing);
			}
			else
				cout<<"El producto no tiene ingredientes.";
			break;
		case 7:
			switch (M) {
				case 1:
					cout<<"Ingrese la caducidad de "<<vector[P]->getNombre()<<": ";
					cin.sync(); cin.getline(nom, 10);
					vector[P]->setCaducidad(nom);
					break;
				case 2:
					do {
						cout<<"Ingrese el voltaje de "<<vector[P]->getNombre()<<": ";
						cin.sync(); cin>>aux;
						if (aux<=0) {
							cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
							system("pause");
						}	
						system("cls");
						vector[P]->setVoltaje(aux);
					} while (aux<0);
					break;
			}
			break;
		case 8:
			vector[P]->cargarDatos();
			break;
	}
}// carDat1Producto
