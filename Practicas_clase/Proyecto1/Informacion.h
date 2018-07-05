#ifndef InformacionH
#define InformacionH

#include <iostream>
#include <string.h>


using namespace std;

class Informacion{
	
	private:
	    //Atributos
		char datos[7][25];
		float precioFibra;
	public:
		//Métodos
		Informacion();
		char * getDatos(int i);
		float getLongitud();
		float getPrecioFibra();
		~Informacion();
};
#endif
