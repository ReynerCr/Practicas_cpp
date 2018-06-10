#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : public Persona {
	public:
		char profesion[40];
		float sueldo;
		short unsigned annosServicio;
		float indRendimiento;
		
		Empleado();
		Empleado(int, short unsigned, char [], char, char[], float, short unsigned, float);
		
		void cargarDatos();
		void mostrarDatos();
		
		~Empleado();
};

#endif
