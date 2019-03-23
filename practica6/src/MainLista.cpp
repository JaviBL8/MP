#include "../include/Lista.h"
#include <iostream>

using namespace std;

int main()
{
	
	cout<<"Pruebo constructor por defecto\n";
	Lista a;
	a.Rellenar();
	a.Imprimir();
	cout<<"Pruebo constructor por parametros\n";
	Lista b(5);
	b.Rellenar();
	b.Imprimir();
	cout<<"Pruebo operador de asignación\n";
	a=b;
	a.Imprimir();
	cout<<"Pruebo constructor de copia\n";
	Lista c(a);
	c.Imprimir();
	cout<<"Pruebo sobrecarga de operador +\n";
	a+b;
	a.Imprimir();

	return 0;
}