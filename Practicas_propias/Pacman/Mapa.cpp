#include "Mapa.h"
#include <iostream>

using namespace std;

Mapa::Mapa() {
	filas = 23;
	columnas = 23;
	
	const char a = '\201', b = '\205', c = '\187', d = '\186', f = '\200', g = '\188', o = '\250';
	const char v = '\202', y = '\204', z = '\185', h = '\203', n = '\196', t = '\79', k = '\32';
	/* esquina, k=espacio, b=barra horizontal, c=esquina, d=barra vertical, f=esquina,t=powerup
	g=esquina, o=comestibles, v="t", y="t", z="t", h="t", n=cierre de cajita fantasmas */
	char mat[filas][columnas] = {{a, b, b, b, b, b, b, b, b, b, h, b, b, b, b, b, b, b, b, b, c},  //20 contando desde 0
      							 {d, o, o, o, o, o, o, o, o, o, d, o, o, o, o, o, o, o, o, o, d},
			      			 	 {d, o, a, b, c, o, a, b, c, o, d, o, a, b, c, o, a, b, c, o, d},
			     				 {d, t, d, k, d, o, d, k, d, o, d, o, d, k, d, o, d, k, d, t, d},
			      				 {d, o, f, b, g, o, f, b, g, o, d, o, f, b, g, o, f, b, g, o, d},
			      				 {d, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, d},
			        			 {d, o, b, b, b, o, d, o, b, b, h, b, b, o, d, o, b, b, b, o, d},
			        			 {d, o, o, o, o, o, d, o, o, o, d, o, o, o, d, o, o, o, o, o, d},
			      			  	 {f, b, b, b, c, o, y, b, b, k, d, k, b, b, z, o, a, b, b, b, g},
			      			  	 {k, k, k, k, d, o, d, k, k, k, k, k, k, k, d, o, d, k, k, k, k},
			      				 {b, b, b, b, g, o, d, k, a, n, n, n, c, k, d, o, f, b, b, b, b},
			      			  	 {k, k, k, k, k, o, k, k, d, k, k, k, d, k, k, o, k, k, k, k, k},  //12 mitad u 11 contando desde 0
			      			  	 {b, b, b, b, c, o, d, k, f, b, b, b, g, k, d, o, a, b, b, b, b},  
			     			  	 {k, k, k, k, d, o, d, k, k, k, k, k, k, k, d, o, d, k, k, k, k},
			      			  	 {a, b, b, b, g, o, d, k, b, b, h, b, b, k, d, o, f, b, b, b, c},  
			      			  	 {d, o, o, o, o, o, o, o, o, o, d, o, o, o, o, o, o, o, o, o, d},
			     			  	 {d, o, b, b, c, o, b, b, b, o, d, o, b, b, b, o, a, b, b, o, d}, 
			     			  	 {d, t, o, o, d, o, o, o, o, o, k, o, o, o, o, o, d, o, o, t, d},
			     			  	 {y, b, b, o, d, o, d, o, b, b, h, b, b, o, d, o, d, o, b, b, z},
			     			     {d, o, o, o, o, o, d, o, o, o, d, o, o, o, d, o, o, o, o, o, d},
			     			  	 {d, o, b, b, b, b, v, b, b, o, d, o, b, b, v, b, b, b, b, o, d},
			     			  	 {d, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, o, d},
			     			  	 {f, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, g}};

	celda = new Casilla 
	for (int i=0; i<this->filas; i++) {
		for (int j=0; j<this->columnas; j++) {
			celda[i][j] = new Casilla();
			if (mat[i][j]==o || mat[i][j]==t) {
				celda[i][j]->setCarBase(' ');
				celda[i][j]->setObjeto((mat[i][j]==o? o:t));
				celda[i][j]->setColor('p');
			}
			else {
				celda[i][j]->setCarBase(mat[i][j]);
				celda[i][j]->setObjeto(' ');
				celda[i][j]->setColor((mat[i][j]==k? 'N':'A'));
			}
		}//j
	}//i
}//constructor por defecto y unico

int Mapa::getFilas() {
	return this->filas;
}

int Mapa::getColumnas() {
	return this->columnas;
}

Casilla* Mapa::getCelda(){
	return this->celda;
}

void Mapa::imprimir() {
	
}

Mapa::~Mapa() {
}
