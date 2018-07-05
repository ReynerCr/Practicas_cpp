#ifndef TANQUE_H
#define TANQUE_H

class Tanque
{
	private:
		int codigo; 
		long double precio; 
		double superficie; 
		
	public:
		Tanque();
		Tanque(int, float, double);
		
		void setCodigo(int);
		void setPrecio(long double);
		void setSuperficie(double);
		int getCodigo();
		long double getPrecio();
		double getSuperficie();
		
		//setterTanqueCilindrico
		virtual void setDiamTapa(float);
		virtual void setAltura(float) =0;
		
		//setter y getter de TanqueConico
		virtual void setDiamSuperior(float);
		virtual void setDiamInferior(float);
		virtual void setAngulo(float);
		virtual void mostrarDatos();
		
		virtual void calcularSuperficie() =0;
		virtual void calcularPrecio(float) =0;
		
		~Tanque();
};

#endif
