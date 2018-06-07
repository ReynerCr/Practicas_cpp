#ifndef CASILLA_H
#define CASILLA_H

class Casilla {
	protected:
		char carBase, objeto, color;
		
	public:
		Casilla();
		
		void setCarBase();
		void setObjeto();
		void setColor();
		
		char getCarBase();
		char getObjeto();
		char getColor();
		
		~Casilla();
};

#endif
