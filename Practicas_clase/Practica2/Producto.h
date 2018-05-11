#ifndef ProductoH
#define ProductoH
#include "Ingrediente.h"

class Producto {
	//atributos
	private:
		int codigo ;
		char nombre[50];
		float precio;
		char estado;
		int canIngredientes;
		Ingrediente **formula;
		
	//metodos
	public:
		Producto();  //por defecto
		Producto (int, char[], float, char);   //basico solo producto
		Producto(int, char[], float, char, int);  //parametrico de vector de formula creando ingredientes vacios
		Producto (int, char[], float, char, int, Ingrediente**); //parametrico pidiendo un **Ingrediente
		Producto(int, char[], char);  //parametrico de ejemplo (clase)
		
		void cargarDatos();
		void mostrarDatos();
		
		void setCodigo(int);
		void setNombre(char[]);
		void setPrecio(float);
		void setEstado(char);
		void setCanIngredientes(int);
		void setFormula(Ingrediente**);
		void setFormulaI(int, Ingrediente *);
		void setFormulaIO(int, Ingrediente);
		
		int getCodigo();
		char* getNombre ();
		float getPrecio();
		char getEstado();
		int getCanIngredientes();
		Ingrediente** getFormula();
		Ingrediente* getFormulaI(int);
		char* getNomFormula(int);
		
		
		~Producto(); 
};

#endif
