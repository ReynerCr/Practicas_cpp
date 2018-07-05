#ifndef INFORMACION_H
#define INFORMACION_H

class Informacion
{
	private:
		char datos1[];
		char datos2[];
		
		unsigned int mascaraCifrado;
		//dato datos2 datos cedula-datocifrado; dato cifrado bits 1 al 6 son edad.
		
	public:
		Informacion();
		char *getDatos1 (int);
		char *getDatos2 (int);
		
		void descifrarEdad();
		int getCedula();
		
		~Informacion();
};

#endif
