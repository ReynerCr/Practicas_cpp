#ifndef ProductoH
#define ProductoH

class Producto {
	//atributos
	private:
		int codigo ;
		char nombre[50];
		float precio;
		char estado;
		
	//metodos
	public:
		Producto();
		Producto(int, char[], float, char);
		Producto(int, char[], char);
		
		void cargarDatos();
		void mostrarDatos();
		
		void setCodigo(int);
		void setNombre(char[]);
		void setPrecio(float);
		void setEstado(char);
		
		int getCodigo();
		char* getNombre ();
		float getPrecio();
		char getEstado();
		
		~Producto(); 
};

#endif
