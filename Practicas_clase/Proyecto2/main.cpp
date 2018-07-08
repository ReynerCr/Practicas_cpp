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

void manejoBits(unsigned int, Tanque *tanque);

int main() {
	Informacion *info = new Informacion();
	const float precioFibra = info->getPrecioFibra();
	int TAM = info->getLongitudDatosGenTanque();
	Tanque *vtanques[TAM];
	char *ptr;
	
	for (int i=0; i<TAM; i++) {
		int tipoTanque;
		int cod;
		
		char DatGenTanque[25];  strcpy(DatGenTanque, info->getDatosGenTanque(i));
		
		ptr = strtok (DatGenTanque, "-"); //obtengo tipo de tanque
		tipoTanque = atoi(ptr);
		
		ptr = strtok (NULL, "-"); //obtengo codigo que deberia ser mayor o igual a 0; no hay codigos negativos:
		cod = atoi(ptr);
		
		ptr = strtok (NULL, "-");
		
		int j = 0;
		while ((j<(info->getLongitudDatosAtribTanque())) && cod!=-1) {
			char *ptrAux;
			unsigned int auxiliar;
			char AtribTanque[25];  strcpy(AtribTanque, info->getDatosAtribTanque(j));
			ptrAux = strtok(AtribTanque, "-");
			auxiliar = atoi(ptrAux);
			if (cod==auxiliar) {
				cod=-1;
				j--;
				
				//creare el tanque:
				if (tipoTanque == 1) {
					vtanques[i] = new TanqueCilindrico();
				}
				else {
					vtanques[i] = new TanqueConico();
				}
				vtanques[i]->setCodigo(auxiliar);
				vtanques[i]->setColor(ptr);
				
				//ahora si, empiezo a manejar bits (paso ptrAux a entero con atoi, reutilizando auxiliar):
				ptrAux = strtok (NULL, "-");
				auxiliar = atoi(ptrAux);
				manejoBits(auxiliar, vtanques[i]);
			}//if para verificar el codigo y hacer todo
			j++;
		}//while para verificar en segunda cadena que este el codigo
		
		//Cambiare TAM, necesito eliminar las posiciones del vector que no tienen nada creado
		if (cod!=-1) {
			TAM--;
			vtanques[TAM] = 0;
			delete vtanques[TAM];
		}
		else {
			//Calculo las cositas que me piden
			vtanques[i]->calcularSuperficie();
			vtanques[i]->calcularPrecio(precioFibra);
		}		
	}//for para el vector que se esta llenando	
	delete info;

	int menu, n=0;
	do {
		cout<<"1. Calcular el precio de venta de un tanque dado."<<endl
    		<<"2. Calcular el promedio del precio de venta de los tanques cilindricos."<<endl
			<<"3. Calcular el total de los precios de venta de los tanques conicos."<<endl
			<<"4. Cantidad de tanques."<<endl
        	<<"5. Salir."<<endl;
        cin>>menu;
        int sumatoria = 0;
        system("cls");
        switch (menu) {
			case 1:
				cout<<"Ingrese el codigo del tanque que quiera consultar: "; cin>>n;
				cout<<endl;
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
				sumatoria /= TAM;
				cout<<"Promedio del precio de todos los tanques cilindricos: "<<sumatoria<<endl;
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
					//reutilizar sumatoria para cilindricos y n para conicos
					if (typeid(*vtanques[i])==typeid(TanqueCilindrico))
						sumatoria++;
					else
						n++;
				}
				cout<<"Cantidad de tanques cilindricos: "<<sumatoria<<endl
					<<"Cantidad de tanques conicos: "<<n<<endl
					<<"Total de tanques: "<<(sumatoria+n)<<endl;
				break;
				
			case 5:
				cout<<"Feliz dia/tarde/noche."<<endl;
				break;
				
			default:
				cout<<"Valor no valido, reingrese despues de la pausa."<<endl;
		}//switch
		cout<<endl;
		system("pause");
		system("cls");
	} while (menu!=5);
	return 0;
}//main

void manejoBits(unsigned int cifrado, Tanque *tanque) {
	unsigned int mascaraVar;
	if (typeid(*tanque)==typeid(TanqueCilindrico)) {
		mascaraVar = 254; //altura
		tanque->setAltura((float)((mascaraVar & cifrado)>>1));
		
		mascaraVar = 65024;
		tanque->setDiamTapa(((float)((mascaraVar & cifrado)>>9)));
	}//si es TanqueCilindrico
	else {
		mascaraVar = 254; //angulo B
		tanque->setAngulo(((float)((mascaraVar & cifrado)>>1)));
		
		mascaraVar = 65024; //altura
		tanque->setAltura(((float)((mascaraVar & cifrado)>>9)));
		
		mascaraVar = 16646144; //diametroInferior
		tanque->setDiamInferior(((float)((mascaraVar & cifrado)>>17)));
					 
		mascaraVar = 4261412864; //diametroSuperior
		tanque->setDiamSuperior(((float)((mascaraVar & cifrado)>>25)));
	}//o si es TanqueConico
}
