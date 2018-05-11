#ifndef LACTEOS_H
#define LACTEOS_H
#include "Producto.h"


class Lacteos: public Producto{
	private:
		char caducidad[12];
	
	public: 
		Lacteos();
		Lacteos(int, char[], float, char, char[]);
		
		void setCaducidad(char[]);
		char *getCaducidad();
		void cargarDatos();
		void mostrarDatos();
		
		~Lacteos();
		
};

#endif
