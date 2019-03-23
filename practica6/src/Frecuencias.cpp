#include <iostream>
#include "../include/Frecuencias.h"

using namespace std;

//-------------------------PAREJAS----------------------------
int Pareja::getdato(){
	return dato;
}
int Pareja::getnveces(){
	return nveces;
}
void Pareja::setdato(int dato_){
	dato=dato_;
}
void Pareja::setnveces(int nveces_){
	nveces=nveces_;
}

//------------------------FRECUENCIAS-------------------------
//Constructor por defecto
Frecuencias::Frecuencias(){

	parejas=NULL;
	npares=0;
}
//Constructor de copia
Frecuencias::Frecuencias(const Frecuencias &copia){

	npares=copia.npares;
	parejas=new Pareja[npares];

	for (int i = 0; i < npares; ++i)
	{
		parejas[i]=copia.parejas[i];		
	}	
}
//Operador de asignación
Frecuencias Frecuencias::operator=(const Frecuencias &fre){

	if (this!=&fre)
	{
		delete parejas;

		this->npares=fre.npares;
		this->parejas=new Pareja[npares];

		for (int i = 0; i < npares; ++i)
		{
			parejas[i]=fre.parejas[i];
		}
	}

	return *this;
}
//Destructor
Frecuencias::~Frecuencias(){
	delete parejas;
}
//Método agregar valor
void Frecuencias::AgregarValor(int valor){

	bool aux=true;

	for (int i = 0; i < npares; ++i)
	{
		if (parejas[i].getdato()==valor)
		{
			parejas[i].setnveces(parejas[i].getnveces()+1);
			aux=false;
		}
	}

	if(aux==true){

		Frecuencias aux(*this);

		delete parejas;
		parejas=new Pareja[aux.npares+1];

		npares=aux.npares+1;

		int i;

		for (i = 0; i < aux.npares; ++i)
		{
			parejas[i]=aux.parejas[i];
		}

		parejas[i].setdato(valor);
		parejas[i].setnveces(1);

	}
}
//Imprimir
void Frecuencias::Imprimir(){

	for (int i = 0; i < npares; ++i)
	{
		cout<<"Dato: "<<parejas[i].getdato()<<"	Nº veces: "<<parejas[i].getnveces()<<endl;
	}
cout<<endl;
}
