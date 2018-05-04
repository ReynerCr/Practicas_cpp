#ifndef HEXAGONO_H
#define HEXAGONO_H

class Hexagono {
	private:
		int tamLados;
		char caracter;
	
	public:
		Hexagono();
		Hexagono(int, char);
		
		void setTamlados(int);
		void setCaracter(char);
		int getTamLados();
		char getCaracter();
		
		void cargarDatos();
		void mostrarDatos();
		void mostrarHexagono();
		
		
		~Hexagono();
};

#endif
