#ifndef PERSONA_H
#define PERSONA_H

class Persona {
	protected:
		int ci;
		short unsigned edad;
		char nombre[50];
		char sexo;
	
	public:
		Persona();
		Persona(int, short unsigned, char[], char);
		
		void cargarDatos();
		void mostrarDatos();
		
		~Persona();
};

#endif
