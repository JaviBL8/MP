#include <iostream>
#include "../include/Polilinea.h"

int main()
{
	cout<<"Pruebo constructor por defecto \nUn punto en (0,0)\n";
	Polilinea defecto;
	defecto.imprimir(defecto);

	cout<<"\nPruebo constructor por parámetros \nLe paso el valor 5 y me crea 5 puntos por defecto en el 0,0\n";
	Polilinea parametros(5);
	parametros.imprimir(parametros);

	cout<<"\nIgualo el último objeto a uno nuevo (operador de asignación)\n";
	defecto=parametros;
	defecto.imprimir(defecto);

	cout<<"\nPruebo agregar punto, a la serie anterior\n";
	Punto uno(1,1);
	defecto.Agregar_Punto(uno);
	defecto.imprimir(defecto);

	return 0;
}