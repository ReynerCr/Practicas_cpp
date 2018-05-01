#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H
#include "Producto.h"


class Electronicos: public Producto {
	private:
		int voltaje;
	
	public:
		Electronicos();
		Electronicos(int, int, char [], float, char);
		
		void setVoltaje(int);
		int getVoltaje();
		void cargarDatos();
		void mostrarDatos();
		
		~Electronicos();
};

#endif
