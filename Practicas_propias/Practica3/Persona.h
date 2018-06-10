#ifndef PERSONA_H
#define PERSONA_H

class Persona {
	public:
		int ci;
		short unsigned edad;
		char nombre[50];
		char sexo;
		bool aux;
	
		Persona();
		Persona(int, short unsigned, char[], char);
		
		void cargarDatos();
		void mostrarDatos();
		
		~Persona();
};

#endif
