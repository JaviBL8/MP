#include <iostream>
#include "../include/BigInt.h"

using namespace std;

int main()
{	

	cout<<"Creo un BigInt de tamaño 10\n";
	BigInt primero(10);
	primero.imprimir();

	cout<<"\nRelleno el BigInt de forma aleatoria\n";
	primero.aleatorizar();
	primero.imprimir();

	cout<<"\nCreo otro BigInt para sumar al primero\n";
	BigInt segundo(10);
	segundo.aleatorizar();
	segundo.imprimir();


	cout<<"\nSumo los dos siguiendo el criterio de la práctica (de atras hacia delante)\n";
	BigInt res(11);
	res=primero+segundo;
	res.imprimir();

	return 0;
}

