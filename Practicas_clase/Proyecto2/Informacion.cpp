#include <iostream>
#include <string.h>
#include "Informacion.h"

using namespace std;

Informacion::Informacion(){
   strcpy(datosGenTanque[0],"1-890-azul");	
   strcpy(datosGenTanque[1],"2-123-naranja");
   strcpy(datosGenTanque[2],"2-147-negro");
   strcpy(datosGenTanque[3],"1-345-verde");
   strcpy(datosGenTanque[4],"2-456-blanco");
   strcpy(datosGenTanque[5],"1-234-gris");
   strcpy(datosGenTanque[6],"2-789-rojo");      
   
   strcpy(datosAtribTanque[0],"123-336463902");    
   strcpy(datosAtribTanque[1],"456-740560424");    
   strcpy(datosAtribTanque[2],"345-7690");         
   strcpy(datosAtribTanque[3],"890-11796");	         
   strcpy(datosAtribTanque[4],"147-908598312");      
   strcpy(datosAtribTanque[5],"234-15384");             

   precioFibra=2340.0;
}

char * Informacion::getDatosGenTanque(int i){
	if (i>=0 && i <this->getLongitudDatosGenTanque()) 
	   return datosGenTanque[i];
	else return 0;
}

char * Informacion::getDatosAtribTanque(int i){
	if (i>=0 && i <this->getLongitudDatosAtribTanque()) 
	   return datosAtribTanque[i];
	else return 0;
}

float Informacion::getPrecioFibra(){
	return precioFibra;
}

int Informacion::getLongitudDatosGenTanque(){
	int longitud = sizeof(datosGenTanque)/sizeof(*datosGenTanque);
    return longitud;
}

int Informacion::getLongitudDatosAtribTanque(){
	int longitud = sizeof(datosAtribTanque)/sizeof(*datosAtribTanque);
    return longitud;
}

Informacion::~Informacion(){
	//destructor para objetos dinamicos
}
