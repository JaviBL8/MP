#include <iostream>
#include "../include/Frecuencias.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(0));
	int vec[6]={9,3,9,3,2,4};

	cout<<"Pruebo constructor por defecto (Frecuencias a)\n";
	Frecuencias a;

	int aux;
	cout<<"\nEmpleo la cadena 939324 como entrada a la práctica \n(a.AgregarValor(int))\n";
	for (int i = 0; i < 6; ++i)
	{
		aux=vec[i];
		//Forma aleatoria
		//aux=rand()%10;	
		a.AgregarValor(aux);
	}
	a.Imprimir();

	cout<<"Pruebo constructor de copia \n(Frecuencias b(a))\n";
	Frecuencias b(a);
	//Creo b igual a a
	b.Imprimir();

	cout<<"Pruebo operador de asignación \n(Frecuencias c=b)\n";
	Frecuencias c;
	c=b;
	
	c.Imprimir();

	return 0;
}