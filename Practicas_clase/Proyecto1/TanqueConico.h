#ifndef TANQUECONICO_H
#define TANQUECONICO_H

#include "Tanque.h"

class TanqueConico : public Tanque {
	private:
		float diametroSuperior;
		float diametroInferior;
		float altura;
		float angulo;
		
	public:
		TanqueConico();
		TanqueConico(float, float, float, float);
		
		void calcularSuperficie();
		void calcularPrecio(float);
		
		virtual void setDiamSuperior(float);
		virtual void setDiamInferior(float);
		virtual void setAltura(float);
		virtual void setAngulo(float);
		float getDiamSuperior();
		float getDiamInferior();
		float getAltura();
		float getAngulo();		
		
		virtual void mostrarDatos();
		
		~TanqueConico();
};

#endif
