#ifndef PERSONA_H
#define PERSONA_H

class Persona
{
	private:
		int cedula;
		int edad;
		char nombre;
		
	public:
		Persona();
		persona(int, char*, char*);
		
		void setCedula(int);
		void setNombre(char*);
		void setEdad(int);
		
		~Persona();
};

#endif
