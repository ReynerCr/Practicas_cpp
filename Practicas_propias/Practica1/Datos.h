#ifndef DatosH
#include <iostream>
#include <string>
#define DatosH

using namespace std;

class Datos  {
	//atributos
	private:
		int edad;
		char sexo;
		string nombre;
		
	public:
		//Constructor
		Datos();
		Datos(int _edad, char _sexo, string _nombre);
		//métodos
		int getEdad() {
			return edad;
		}
		string getSexo() {
			if (sexo == 'h' || sexo == 'H') {
				return ("desconocido.");
			}
			return ((sexo=='m' || sexo=='M') ?"masculino.":"femenino.");
		}
		string getNombre() {
			return nombre;	
		}	
};


#endif

