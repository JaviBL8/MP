#include "../include/MatrizDispersa.h"
#include <iostream>

using namespace std;

int main()
{
	int filas[4]={1,2,3,4};
	int columnas[4]={1,2,3,4};
	double valor[4]={1.0,2.0,3.0,4.0};

	int tamv=(sizeof valor)/(sizeof *valor);

	MatrizDispersa prueba;

	cout<<"\nCostructor por parámetros (MatrizDispersa prueba2(2,3,3)\n";
	MatrizDispersa prueba2(2,3,3);
	prueba2.imprimir(2);

	cout<<"\nCostructor de copia de la matriz anterior\n";
	MatrizDispersa copia(prueba2);	
	copia.imprimir(2);

	cout<<"\nCostructor de copia2: \nA partir de 3 vectores, establezco la posicion de los VALORES \n";
	MatrizDispersa copia2(filas,columnas,valor,4,4,tamv);
	copia2.imprimir(tamv);

	cout<<"\nOperador de asignación\n";
	prueba=copia2;
	prueba.imprimir(tamv);

	return 0;
}