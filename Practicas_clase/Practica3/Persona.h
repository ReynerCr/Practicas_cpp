#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
	private:
		int cedula;
		int edad;
		char nombre[40];
		
	public:
		Persona();
		Persona(int, int, char[]);
		
		void setCedula(int);
		void setEdad(int);
		void setNombre(char*);
		int getCedula();
		int getEdad();
		char *getNombre();
		
		~Persona();
};

#endif
