#ifndef PerroH
#define PerroH
#include <iostream>
#include <string>

using namespace std;

class Perro {
	private: 
		short unsigned edad;
		string nombre, duenno;
		
	public:
		//constructor predeterminado
		Perro();
		//constructor con datos
		Perro(short unsigned, string, string);
		
		//metodos getters
		int getEdad();
		string getNombre();
		string getDuenno();
		
		//metodos para devolver acciones
		void examinar();
		string pasear();
		string bannar();
		string comer();
		string dormir();
		string despertar();
		
		//destructor
		~Perro() {cout<<"El perro murio.";	}
};


#endif
