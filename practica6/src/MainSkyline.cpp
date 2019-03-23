#include <iostream>
#include "../include/Skyline.h"

using namespace std;

int main()
{
	cout<<"Pruebo constructor por defecto\n";
	Skyline a;

	cout<<"Pruebo constructor para un edificio\n";
	a.Aniadir(1.0,2.0,4.0);
	a.Aniadir(4.0,5.0,6.0);
/*
	cout<<"Pruebo constructor de copia\n";
	Skyline c(b);

	/*cout<<"Pruebo operador de asignación\n";
	a=c;
*/
	a.imprimir();

	return 0;
}