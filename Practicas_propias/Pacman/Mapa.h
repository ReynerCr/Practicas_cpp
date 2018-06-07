#ifndef MAPA_H
#define MAPA_H
#include "Casilla.h"

class Mapa {
	protected:
		int filas, columnas;
		Casilla **celda;
		
	public:
		Mapa();
		
		int getFilas();
		int getColumnas();
		Casilla* getCelda();
		
		void imprimir();
		
		~Mapa();	
};

#endif
