#ifndef TANQUECILINDRICO_H
#define TANQUECILINDRICO_H

#include "Tanque.h"

class TanqueCilindrico : public Tanque {
	private:
		float diametroTapa;
		float altura;
		
	public:
		TanqueCilindrico();
		TanqueCilindrico(int, float, float);
		
		void calcularSuperficie();
		void calcularPrecio(float);
		
		virtual void setDiamTapa(float);
		virtual void setAltura(float);
		float getDiamTapa();
		float getAltura();
		
		virtual void mostrarDatos();
		
		~TanqueCilindrico();
};

#endif
