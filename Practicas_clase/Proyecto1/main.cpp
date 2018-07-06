//Nombre: Reyner Contreras
//Programación I sección 1.

#include <iostream>
#include "Tanque.h"
#include "TanqueCilindrico.h"
#include "TanqueConico.h"
#include "Informacion.h"
#include <stdlib.h>
#include <string.h>
#include <typeinfo.h>
 
using namespace std;

void acomodarDato(Tanque *, float, int);

int main() {
	Informacion *info = new Informacion();
	const float precioFibra = info->getPrecioFibra();
	int TAM = info->getLongitud();
	Tanque *vtanques[TAM];
	char *ptr;
	
	for (int i=0; i<TAM; i++) {
		float aux;
		
		ptr = strtok (info->getDatos(i), "-");
		aux = atoi (ptr);
		
		if (aux == 1) {
			vtanques[i] = new TanqueCilindrico;			
		}
		else {
			vtanques[i] = new TanqueConico;
		}
		
		int contador = 0;
		while ((typeid(*vtanques[i])==typeid(TanqueCilindrico) ?contador<=2:contador<=4)) {
			ptr = strtok(NULL, "-");
			aux = atoi (ptr);
			acomodarDato(vtanques[i], aux, contador);
			contador++;
		}		
		vtanques[i]->calcularSuperficie();
		vtanques[i]->calcularPrecio(precioFibra);
	}//for para cargar los datos;
	
	delete info;
	//-------- AÑADIR ATRIBUTO COLOR EN TANQUE, SU SETTER Y GETTER
	int menu, n;
	do {
		cout<<"1. Calcular el precio de venta de un tanque dado."<<endl
    		<<"2. Calcular precio de venta de todos los tanques cilindricos."<<endl
			<<"3. Calcular precio de venta de todos los tanques conicos."<<endl
			<<"4. Calcular precio de venta de todos los tanques."<<endl
        	<<"5. Salir."<<endl;
        cin>>menu;
        int sumatoria = 0;
        system("cls");
        switch (menu) {
			case 1:
				cout<<"Ingrese el codigo del tanque que quiera consultar: "; cin>>n;
				//reusare sumatoria como un iterador;
				if (n>=0) {
					while (sumatoria<TAM && n!=-1) {
						if (vtanques[sumatoria]->getCodigo()==n) {
							n=-1;
							sumatoria--;
						}
						sumatoria++;
					}//while
					
					if (n==-1) {
						cout<<"Datos del tanque:"<<endl;
						vtanques[sumatoria]->mostrarDatos();
					}
					else {
						cout<<"El codigo ingresado no coincide con ninguno de los tanques."<<endl;
					}
				}//if n>=0	
				else {
					cout<<"Codigo debe ser mayor a cero."<<endl;
				}
				break;
				
			case 2:
				for (int i=0; i<TAM; i++) {
					if (typeid(*vtanques[i])==typeid(TanqueCilindrico))
						sumatoria += vtanques[i]->getPrecio();
				}
				cout<<"Total de precio de tanques cilindricos: "<<sumatoria<<endl;
				break;
				
			case 3:
				for (int i=0; i<TAM; i++) {
					if (typeid(*vtanques[i])==typeid(TanqueConico))
						sumatoria += vtanques[i]->getPrecio();
				}
				cout<<"Total de precio de tanques conicos: "<<sumatoria<<endl;
				break;
				
			case 4:
				for (int i=0; i<TAM; i++) {
					sumatoria += vtanques[i]->getPrecio();
				}
				cout<<"Total de precio de todos los tanques: "<<sumatoria<<endl;
				break;
				
			case 5:
				cout<<"Feliz dia/tarde/noche."<<endl;
				break;
				
			default:
				cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
		}//switch
		system("pause");
		system("cls");
	} while (menu!=5);
	return 0;
}//main

void acomodarDato(Tanque *tanque, float aux, int contador) {
	switch (contador) {
		case 0:
			tanque->setCodigo(aux);
			break;
			
		case 1:
			if (typeid(*tanque)==typeid(TanqueCilindrico))
				tanque->setDiamTapa(aux);	
			else
				tanque->setDiamSuperior(aux);
			break;
		
		case 2:
			if (typeid(*tanque)==typeid(TanqueCilindrico)) {
					tanque->setAltura(aux);
			}
			else
				tanque->setDiamInferior(aux);
			break;
		
		//case 3 y 4 son solo para conico
		case 3:
				tanque->setAltura(aux);
			break;
			
		case 4:
			tanque->setAngulo(aux);
			break;
	}
}//AcomodarDato
