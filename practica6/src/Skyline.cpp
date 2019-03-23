#include <iostream>
#include "../include/Skyline.h"

using namespace std;
//Constructor por defecto
Skyline::Skyline(){

	abscisas = NULL;
	alturas = NULL;
	n=0;
}
//Destructor
Skyline::~Skyline(){

	delete[] abscisas;
	delete[] alturas;
	n=0;
}
//Constructor de un edificio 
void Skyline::Aniadir(double izda, double dcha, double alt){

	//Redimensiono
	n+=2;
	double *abscisasr=new double[n];
	double *alturasr=new double[n];

	int i=0;
	for (i = 0; i < n-2; ++i)
	{
		abscisasr[i]=abscisas[i];
		alturasr[i]=alturas[i];
	}
	abscisasr[i]=izda;
	abscisasr[i+1]=dcha;
	alturasr[i]=alt;
	alturasr[i+1]=alt;
	alturasr[i+2]=0;

	delete[] abscisas;
	delete[] alturas;

	abscisas=abscisasr;
	alturas=alturasr;

}
//Constructor de copia
Skyline::Skyline(const Skyline &copia){

	n=copia.n;
	abscisas=new double[n];
	alturas=new double[n];

	for (int i = 0; i < n; ++i)
	{
		abscisas[i]=copia.abscisas[i];
		alturas[i]=copia.alturas[i];
	}
}
//Operador de asignación
Skyline Skyline::operator=(const Skyline &skl){

	if (this!=&skl)
	{
		delete[] abscisas;
		delete[] alturas;
	
		this->n=skl.n;
		this->abscisas=new double[n];
		this->alturas=new double[n];

		for (int i = 0; i < n; ++i)
		{
			abscisas[i]=skl.abscisas[i];
			alturas[i]=skl.alturas[i];
		}
	}

	return *this;
}

void Skyline::imprimir(){

	int x=0;

	cout<<"El Skyline tiene "<<n-2<<" edificios"<<endl;
	for (int i = 0; i < n; i+=2)
	{ 
		if (alturas[i]>0)
		{
			cout<<abscisas[i]<<endl;
			for (int j = 0; j < alturas[i]; ++j)
			{
				cout<<"|";
			}
			cout<<endl<<abscisas[i+1];
		}
		cout<<endl;		
	}
}