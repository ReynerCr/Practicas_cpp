#ifndef LACTEOS_H
#define LACTEOS_H
#include "Producto.h"


class Lacteos: public Producto{
	private:
		char caducidad[12];
	
	public: 
		Lacteos();
		Lacteos(int, char[], float, char, char[]);
		
		virtual void setCaducidad(char *);
		virtual char *getCaducidad();
		virtual void cargarDatos();
		virtual void mostrarDatos();
		
		~Lacteos();
		
};

#endif
