#ifndef TANQUE_H
#define TANQUE_H

class Tanque
{
	private:
		int codigo; 
		unsigned long long precio; 
		float superficie; 
		
	public:
		Tanque();
		Tanque(int, unsigned long long, float);
		
		void setCodigo(int);
		void setPrecio(unsigned long long);
		void setSuperficie(float);
		int getCodigo();
		unsigned long long getPrecio();
		float getSuperficie();
		
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
