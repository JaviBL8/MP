#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include "../include/16_PosMayor.h"

using namespace std;

int main(int argc,char const *argv[])
{
	const int TOPE=100;
	int vector[TOPE];
	int *pv;

	srand(time(NULL));
	
	if (argc==1)
	{
		for (int i = 0; i < 100; ++i)
		{
			vector[i]=rand()%51;
		}
		pv=vector;
		cout<<"La posicion del mayor es "<<PosMayor(pv,0,TOPE)<<endl;
	}
	else if (argc==2)
	{
		int a=atoi(argv[1]);
		for (int i = 0; i < a; ++i)
		{
		vector[i]=rand()%51;
		}
		pv=vector;
		cout<<"La posicion del mayor es "<<PosMayor(pv,0,a)<<endl;
	}
	else if (argc==3)
	{
		int a=atoi(argv[1]);
		for (int i = 0; i < a; ++i)
		{
		vector[i]=rand()%51;
		}
		pv=vector;
		int b=atoi(argv[2]);
		cout<<"La posicion del mayor es "<<PosMayor(pv,0,b)<<endl;
	}
	else if (argc==4)
	{
		int a=atoi(argv[1]);
		for (int i = 0; i < a; ++i)
		{
		vector[i]=rand()%51;
		}
		pv=vector;
		int b=atoi(argv[2]);
		int c=atoi(argv[3]);
		cout<<"La posicion del mayor es "<<PosMayor(pv,b,c)<<endl;
	}
	else
		cout<<"Error en el numero de argumentos "<<endl;
}
	