#include <iostream>
#include <string.h>
#include "Informacion.h"

using namespace std;

Informacion::Informacion(){
   strcpy(datos[0],"1-890-23-10");	
   strcpy(datos[1],"2-123-10-7-4-15");
   strcpy(datos[2],"1-345-15-5");
   strcpy(datos[3],"2-456-22-18-7-20");
   strcpy(datos[4],"2-789-14-10-5-30");
   strcpy(datos[5],"1-234-30-12");   
   strcpy(datos[6],"2-147-27-20-14-20");

   precioFibra=2340.0;
}
char * Informacion::getDatos(int i){
	//if (i>=0 && i <this->getLongitud()) 
	   return datos[i];
	//else return 0;
}

float Informacion::getPrecioFibra(){
	return precioFibra;
}

float Informacion::getLongitud(){
	int longitud = sizeof(datos)/sizeof(*datos);
    return longitud;
}

Informacion::~Informacion(){
	//destructor para objetos dinamicos
}
