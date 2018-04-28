#ifndef VENDEDOR_H
#define VENDEDOR_H

class Vendedor {
	private:
		char nombre[50];
		double ventasAnuales;
		
	public:
		Vendedor();
		Vendedor(char[], double);
		void cargarDatos();
		void mostrarDatos();
		double getVentasAnuales();
			
		~Vendedor();
	
};

#endif
