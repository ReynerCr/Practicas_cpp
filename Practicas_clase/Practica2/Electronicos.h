#ifndef ELECTRONICOS_H
#define ELECTRONICOS_H
#include "Producto.h"


class Electronicos: public Producto {
	private:
		int voltaje;
	
	public:
		Electronicos();  //defecto
		Electronicos(int, char[], float, char, int);  //parametrico normal
		
		virtual void setVoltaje(int);
		virtual int getVoltaje();
		virtual void cargarDatos();
		virtual void mostrarDatos();
		
		~Electronicos();
};

#endif
