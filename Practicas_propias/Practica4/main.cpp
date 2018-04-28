#include <iostream>
#include <string.h>
#include <ctype.h>
#include "Vendedor.h"

using namespace std;

int main() {
	double granTotVentas;
	char resp;
	Vendedor v1;
	
	do {
		
		v1.cargarDatos();
		cout<<endl;
		v1.mostrarDatos();
		granTotVentas += v1.getVentasAnuales();
		v1 = Vendedor();
		
		cout<<"Desea calcular las ventas de otro vendedor? S/N    ";
		cin.sync();
		resp = tolower(cin.get());
		system ("cls");
	} while (resp == 's');
	cout<<"Gran total de ventas registradas: $"<<granTotVentas<<endl;	
	
	cin.sync();
	system ("pause");
	return 0;
}
