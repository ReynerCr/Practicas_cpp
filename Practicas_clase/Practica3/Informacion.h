#ifndef INFORMACION_H
#define INFORMACION_H

class Informacion
{
	private:
		char datos1[3][30];
		char datos2[3][30];
		
		//dato datos2 datos cedula-datocifrado; dato cifrado bits 1 al 6 son edad.
		
	public:
		Informacion();
		
		int getLongitud1();
		int getLongitud2();
		
		char * getDatos1 (int);
		char * getDatos2 (int);
		
		~Informacion();
};

#endif
