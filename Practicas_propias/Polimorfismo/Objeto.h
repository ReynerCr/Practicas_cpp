#ifndef OBJETO_H
#define OBJETO_H

class Objeto {
	private:
		int tamCm, annos;
		bool encendido, operativo;
	
	public:
		Objeto();
		
		void setTamCm(int);
		void setAnnos(int);
		void setEncendido(char);
		void setOperativo(char);
		
		int getTamCm();
		int getAnnos();
		char* getEncendido();
		char* getOperativo();
};

#endif
