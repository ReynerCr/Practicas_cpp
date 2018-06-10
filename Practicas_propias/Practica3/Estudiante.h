#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona { 
	public:
		int semestre;
		int numeroMaterias;
		float promedio;
			
		Estudiante();
		Estudiante(int, short unsigned, char[], char, int, int, float);
		
		void cargarDatos();
		void mostrarDatos();
				
		~Estudiante();
};

#endif
