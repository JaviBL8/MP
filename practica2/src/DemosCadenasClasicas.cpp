#include "../include/MiCadenaClasica.h"
#include <iostream>

using namespace std;

int main()
{
	const int TOPE=100;
	char cadena1[TOPE];
	char cadena2[TOPE];
	int longitud=0;
	char *p,*q,*copia;
	bool pal=false;
	int pos1,pos2;


	cout<<"Introduzca una cadena: "<<endl;
	cin.getline(cadena1,TOPE);

	p=cadena1;
	
	longitud=longitud_cadena(p);
	cout<<"La longitud de la cadena es: "<<longitud<<endl;

	

	pal=palindromo(p);
	if (pal){
		cout<<"La cadena es un palindromo"<<endl;
	}
	else{
		cout<<"La cadena no es un palindromo"<<endl;
	}

	
	
	cout<<"Introduzca la segunda cadena: "<<endl;
	cin.getline(cadena2,TOPE);

	q=cadena2;

	comparar_cadenas(p,q);

	if (comparar_cadenas(p,q)>=0)
		cout<<"La primera cadena es mas grande que la segunda "<<comparar_cadenas(p,q)<<endl;
	else
		cout<<"La segunda cadena es mas grande que la primera "<<comparar_cadenas(p,q)<<endl;

	
	cout<<"Realizando copia de la ultima cadena introducida..."<<endl;
	cout<<copiar_cadena(copia,q)<<endl;
	cout<<"Copia realizada"<<endl;
	
	

	cout<<"Encadenando primera y segunda cadena"<<endl;
	cout<<encadenar_cadena(p,q)<<endl;

	cout<<"Cortar cadena(ultima cadena introducida), introduzca dos posiciones"<<endl;
	cin>>pos1;
	cin>>pos2;
	cout<<"La subcadena obtenida es: "<<obtener_subcadena(q,pos1,pos2)<<endl;

	cout<<"Invierto la ultima cadena"<<endl;
	cout<<(invertir_cadena(q))<<endl;
}	