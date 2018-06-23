#include <iostream>
#include <cstring>

using namespace std;

int main() {
	unsigned int persona=0, mascara_edad, mascara_sexo, mascara_carrera, dato;
	
	mascara_sexo = 3;
	mascara_edad = 127; mascara_edad <<= 2;
	mascara_carrera = 15; mascara_carrera <<=10;
	
	cout<<"Ingrese datos de la persona:"<<endl;
	
	
	do {
		cout<<"Sexo (0=femenino, 1=masculino): "; cin>>dato;
		system("cls");
		if (dato<0 || dato>2) 
			cout<<"No valido, reingrese."<<endl;
	} while (dato<0 || dato>2);
	
	persona |= dato;
	
	
	do {
		cout<<"Edad (1-127): "; cin>>dato;
		system ("cls");
		if (dato<1 || dato>127) 
			cout<<"No valido, reingrese."<<endl;
	} while (dato<1 || dato>127);
	dato <<= 2;
	persona |= dato;
	
	cout<<"Carrera (0-15): "<<endl;
	do {
		cout<<"0. Ingenieria aeroespacial."<<endl
			<<"1. Ingenieria en informatica."<<endl
		    <<"2. Ingenieria en electronica."<<endl
		    <<"3. Ingenieria civil."<<endl
		    <<"4. Ingenieria industrial."<<endl
		    <<"5. Ingenieria en sistemas."<<endl
		    <<"6. Ingenieria ambiental."<<endl
		    <<"7. Ingenieria agroquimica."<<endl
		    <<"8. Ingenieria mecanica."<<endl
		    <<"9. Musica."<<endl
		    <<"10. Arquitectura."<<endl
		    <<"11. Dibujo."<<endl
		    <<"12. Matematica pura."<<endl
		    <<"13. Derecho."<<endl
		    <<"14. Quimica aplicada."<<endl
		    <<"15. Medicina."<<endl;
		    
		cin>>dato;
		system ("cls");
		if (dato<0 || dato>15) {
			cout<<"No es una carrera valida, reingrese: "<<endl;
		}
		    
	} while (dato<0 || dato>15);
	dato <<= 10;
	persona |= dato;
	system("cls");
	//system("cls");
	
	cout<<"Estos son los datos de la persona: "<<endl
		<<"Sexo: "<<((mascara_sexo & persona) == 0 ?"Femenino.":"Masculino.")<<endl
		<<"Edad: "<<((mascara_edad & persona)>>2)<<endl
		<<"Carrera: ";
		
	switch ((mascara_carrera & persona)>>10) {
		case 0:
			cout<<"Ingenieria aeroespacial."<<endl;
			break;
		case 1:
			cout<<"Ingenieria en informatica."<<endl;
			break;
		case 2:
			cout<<"Ingenieria en electronica."<<endl;
			break;
		case 3:
			cout<<"Ingenieria civil."<<endl;
			break;
		case 4:
			cout<<"Ingenieria industrial."<<endl;
			break;
		case 5:
			cout<<"Ingenieria en sistemas."<<endl;
			break;
		case 6:
			cout<<"Ingenieria ambiental."<<endl;
			break;
		case 7:
			cout<<"Ingenieria agroquimica."<<endl;
			break;
		case 8:
			cout<<"Ingenieria mecaina."<<endl;
			break;
		case 9:
			cout<<"Musica."<<endl;
			break;
		case 10:
			cout<<"Arquitectura."<<endl;
			break;
		case 11:
			cout<<"Dibujo."<<endl;
			break;
		case 12:
			cout<<"Matematica pura"<<endl;
			break;
		case 13:
			cout<<"Derecho"<<endl;
			break;
		case 14:
			cout<<"Quimica aplicada"<<endl;
			break;
		case 15:
			cout<<"Medicina"<<endl;
			break;
	}
	
	cin.get();
	return 0;
}
