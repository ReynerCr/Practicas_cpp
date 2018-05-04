#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H
#include "Producto.h"


class Electronicos: public Producto {
	private:
		int voltaje;
	
	public:
		Electronicos();  //defecto
		Electronicos(int, char[], float, char, int);  //parametrico normal
		
		void setVoltaje(int);
		int getVoltaje();
		void cargarDatos();
		void mostrarDatos();
		
		~Electronicos();
};

#endif
