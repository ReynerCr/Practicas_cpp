#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Informacion.h"
#include "Persona.h"

using namespace std;

int main() {  //Calcular el promedio de edades
	Informacion *p1 = new Informacion();
	Persona *personas[3];
	unsigned int aux;
	
	char *ptr;
		
	for (int i=0; i<3; i++) {
		personas[i] = new Persona();
		char datos[30];
		ptr = strtok(p1->getDatos1(i), "-"); //obtengo cedula
		
		aux = atoi(ptr);
		personas[i]->setCedula(aux);
		ptr = strtok(NULL, "-"); //obtengo nombre
		personas[i]->setNombre(ptr);
		char *ptr2;
		
		for (int j=0; j<3; j++) {
			strcpy (datos, p1->getDatos2(j));
			ptr2 = strtok(datos, "-"); //obtengo cedula2
			aux = atoi(ptr2);
			
			if(personas[i]->getCedula() == aux) {
				ptr2 = strtok(NULL, "-"); //obtengo entero para manejo de bits
				aux = atoi(ptr2);
				
				unsigned int mascaraEdad = 63;
				personas[i]->setEdad((aux & mascaraEdad)>>1);				
				break;
			}//if
			
		}//for j
	}//for
	
	delete p1;
	
	cout<<"Datos de las personas: "<<endl;
	for (int i=0; i<3; i++) {
		cout<<(i+1)<<". Cedula: "<<personas[i]->getCedula()<<endl
			<<". Edad: "<<personas[i]->getEdad()<<endl
			<<". Nombre: "<<personas[i]->getNombre()<<endl;
		
		cout<<endl<<endl;
	}
	cin.sync();
	cin.get();
	return 0;
}


 /*char frase[]="Me van a dividir jojo jojo ji";
       char *ptr;
       cout << "LA FRASE ANTES: " << frase << endl;
       ptr = strtok(frase," ");//argumentos: frase, caracter delimitador
       while(ptr != NULL){
            cout << "ptr = " << ptr << endl;
            ptr = strtok(NULL, " ");
       }
       cout << "LA FRASE DESPUES: " << frase << endl;
       cin.get();
*/
