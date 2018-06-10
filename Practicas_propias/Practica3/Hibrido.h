#ifndef HIBRIDO_H
#define HIBRIDO_H

#include "Estudiante.h"
#include "Empleado.h"

class Hibrido : virtual public Estudiante, virtual public Empleado {
	public:
		char horasLibres[30];
		
		Hibrido();
		
		void cargarDatos();
		void mostrarDatos();
		char* getHorasLibres();
		
		~Hibrido();
	
};

#endif
