#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include "../include/17_OrdenConPunteros.h"

using namespace std;

int main(int argc, char const *argv[])
{
	const int TOPE=100;
	int vector[TOPE];
	int * ptr [TOPE];

	srand(time(NULL));
	for (int i = 0; i < TOPE; ++i)
	{
		vector[i]=rand()%51;
		cout<<vector[i]<<" ";
		*(ptr+i)=NULL;
	}
	cout<<endl;
	if (argc==1)
	{
		Ordena(vector,ptr,0,TOPE);
		cout<<"VECTOR ORDENADO: "<<endl;
		for (int i = 0; i < TOPE; ++i)
		{
			cout<<*ptr[i]<<" ";
		}
		cout<<endl;
	}
	else if (argc==3)
	{
		int a=atoi(argv[1]);
		int b=atoi(argv[2]);
		Ordena(vector,ptr,a,b);
		cout<<"VECTOR ORDENADO: "<<endl;
		for (int i = 0; i < b-a; ++i)
		{	
			cout<<*ptr[i]<<" ";
		}
		cout<<endl;
	}
	else
		cout<<"Error en el numero de argumentos "<<endl;

}