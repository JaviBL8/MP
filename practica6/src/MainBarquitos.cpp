#include "../include/Barquitos.h"
#include <iostream>

using namespace std;

int main()
{
	int filas=0,columnas=0;
	cout<<"Introduzca las dimensiones del tablero \nFilas: ";
	cin>>filas;
	cout<<"Columnas: ";
	cin>>columnas;

	cout<<"Creo un tablero con constructor por parametos \n";

	//Creo objeto y lo imprimo
	juego nuevo(filas,columnas);

	cout<<"Lo relleno con barcos aleatoriamente"<<endl;
	nuevo.rellenar();
	nuevo.imprimir();

	cout<<"Creo tablero con constructor sin parámetros y copio un tablero en otro "<<endl;
	juego copia(nuevo);
	copia.imprimir();

	cout<<"Compruebo si puedo añadir un barco de tamaño 1 en pos 0,1 por ejemplo... \n";
	if(copia.comprobar_pos(0,1,1,'H')==true){
		copia.set(0,1,1,'H');
		cout<<"Lo imprimo en caso de haberlo anadido "<<endl;
		copia.imprimir();
	}

	juego asda;
	cout<<"Pruebo operador de asignacion con el primer tablero\n";
	asda=nuevo;

	asda.imprimir();	

	return 0;
}