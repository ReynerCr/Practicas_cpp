#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "Persona.h"

class Empleado : virtual public Persona {
	private:
		char profesion[40];
		float sueldo;
		short unsigned annosServicio;
		float indRendimiento;
		
	public:
		Empleado();
		Empleado(char[], float, short unsigned, float);
		
		~Empleado();
};

#endif
