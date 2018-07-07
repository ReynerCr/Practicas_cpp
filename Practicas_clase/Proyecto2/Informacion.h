#ifndef InformacionH
#define InformacionH

#include <iostream>
#include <string.h>


using namespace std;

class Informacion{
	
	private:
	    //Atributos
		char datosGenTanque[7][25];
		char datosAtribTanque[6][25];
		float precioFibra;
	public:
		//Métodos
		Informacion();
		char * getDatosGenTanque(int i);
		char * getDatosAtribTanque(int i);
		int getLongitudDatosGenTanque();
        int getLongitudDatosAtribTanque();
		float getPrecioFibra();
		~Informacion();
};
#endif

