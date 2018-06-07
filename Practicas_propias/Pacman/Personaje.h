#ifndef PERSONAJE_H
#define PERSONAJE_H

class Personaje {
	protected:
		int posFilas, posColumnas, direccion;
		char color, caracter, estado;
		
	public:
		Personaje();
		
		void setPosFilas(int);
		void setPosColumnas(int);
		void setDireccion(int);
		void setColor(char);
		void setEstado(char);
		
		int getPosFilas();
		int getPosColumnas();
		int getDireccion();
		char getColor();
		char getCaracter();
		char getEstado();	
		
		~Personaje();
	
};

#endif
