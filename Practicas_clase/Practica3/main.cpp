#include <iostream>
#include <string.h>
#include <cstdlib.h>
#include "Informacion.h"
#include "Persona.h"

using namespace std;

void copDatCadena(char*, char*);

int main() {  //Calcular el promedio de edades
	Informacion *p1;
	Persona personas*[3];
	int i = 0, aux;
	char datos[3];
	char *ptr;
	
	ptr = strtok(datos, "-");
	aux = atoi (*ptr)
	Persona[i]->setCedula() = aux;
	
	return 0;
}

void copDatCadena(char* copia, char* original) {
	strcmp(copia, original);
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
