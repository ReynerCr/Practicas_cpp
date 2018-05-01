#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona {
	protected: 
		int semestre;
		int numeroMaterias;
		float promedio;
			
	public:
		Estudiante();
		Estudiante(int, short unsigned, char[], char, int, int, float);
		
		void cargarDatos();
		void mostrarDatos();
				
		~Estudiante();
};

#endif
