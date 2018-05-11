#include <iostream>

using namespace std;

int main() {
	int numero, tamanyoNumero=1, tamNumDiez, auxiliar, numFinal=0;

	cout<<"\tVoltear un numero (entero)."<<endl;
	cout<<"Ingrese numero: "; cin.sync(); cin>>numero;
	
	//Determinar el tamaño del numero
	tamNumDiez=10;
	while ((numero/tamNumDiez)>0) {
		tamanyoNumero++;
		tamNumDiez *= 10;
	}
	
	cout<<"Tamanyo del numero: "<<tamanyoNumero<<endl<<endl;
	tamNumDiez /= 10;
	
	//ahora si, el volteo utilizando variables auxiliares
	for (int i=tamNumDiez; i>0; i/=10) {
		auxiliar = ((numero%10)*i);
		numero /= 10;
		numFinal += auxiliar;
	}
	cout<<endl<<"Numero final: "<<numFinal;
	
	cin.sync();
	cin.get();
	return 0;
}
