#ifndef IngredienteH
#define IngredienteH

class Ingrediente {
	private:
		int codigo;
		char nombre[30];
		char unidadMedida[20];
		float costo;
		float precio;		
		
	public:
		Ingrediente();
		Ingrediente(int, char*, char*, float, float);
		
		void cargarDatos();
		void mostrarDatos();
		void mostDatEnLinea();
		void calcularPrecio();
		
		~Ingrediente();
		
		void setCodigo(int);
		void setNombre(char[]);
		void setUnidadMedida(char[]);
		void setCosto(float);
		void setPrecio(float);
		
		int getCodigo();
		char* getNombre();
		char* getUnidadMedida();
		float getCosto();
		float getPrecio();
};

#endif
