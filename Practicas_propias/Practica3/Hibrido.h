#ifndef HIBRIDO_H
#define HIBRIDO_H

#include "Estudiante.h"
#include "Empleado.h"

class Hibrido : virtual public Estudiante, virtual public Empleado {
	protected:
		char horasLibres[30];
		
	public:
		Hibrido();
		
		void cargarDatos();
		void mostrarDatos();
		char* getHorasLibres();
		
		~Hibrido();
	
};

#endif
