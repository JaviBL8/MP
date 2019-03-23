#include <iostream>
#include "../include/Menu.h"

using namespace std;

//Constructor por defecto
Menu::Menu(){

	nopc=0;
	opc=NULL;
	titulo=NULL;
}
//Destructor
Menu::~Menu(){
	
	Liberar();
}
//Constructor de copia
Menu::Menu(const Menu &copia){

	nopc=copia.nopc;
	
	titulo=new char[20];

	for (int i = 0; i < 20; ++i)
	{
		titulo[i]=copia.titulo[i];
	}

	opc=new char *[nopc];

	for (int i = 0; i < nopc; ++i)
	{
		opc[i]=new char[20];
	}

	for (int i = 0; i<nopc; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			opc[i][j]=copia.opc[i][j];
		}
	}

}
//Poner título
void Menu::setTitulo(char titulo_[]){

	titulo=new char[20];

	int i=0;
	while(titulo_[i]!='\n'){
		titulo[i]=titulo_[i];
		i++;
	}
	titulo[i]=titulo_[i];

}
//Devolver el número de opciones
int Menu::getNumeroOpciones(){

	return nopc;
}
//Agregar opción
void Menu::agregarOpcion(char opcion[]){

	Menu aux(*this);

	Liberar();

	nopc=aux.nopc+1;
	Reservar();

	int i=0;
	while(aux.titulo[i]!='\n'){
		titulo[i]=aux.titulo[i];
		i++;
	}
	titulo[i]=aux.titulo[i];

	for (int i = 0; i < nopc-1; ++i)
	{
		for (int j = 0; j < 20; ++j)
		{
			opc[i][j]=aux.opc[i][j];
		}
	}

	for (int x = 0; x < 20; ++x)
	{
		opc[nopc-1][x]=opcion[x];
	}
}
//Operador de asignación
Menu Menu::operator=(const Menu &mem){

	if (this!=&mem)
	{
		Liberar();

		this->nopc=mem.nopc;

		Reservar();

		for (int i = 0; i < 20; ++i)
		{
			titulo[i]=mem.titulo[i];
		}

		for (int i = 0; i < nopc; ++i)
		{
			for (int j = 0; j < 20; ++j)
			{
				opc[i][j]=mem.opc[i][j];
			}
		}
	}

	return *this;
}
//Liberar memoria
void Menu::Liberar(){
	
	delete[] titulo;

	for (int i = 0; i < nopc; ++i)
	{
		delete[] opc[i];
	}
	delete[] opc;	
}
//Reservar memoria
void Menu::Reservar(){
	
	titulo=new char[20];

	opc=new char*[nopc];
	for (int i = 0; i < nopc; ++i)
	{
		opc[i]=new char[20];
	}
	
}
//Función auxiliar para ver si el programa funciona correctamente
void Menu::Imprimir(){

	cout<<"TITULO:"<<'\t'<<titulo<<endl;

	for (int i = 0; i < nopc; ++i)
	{
		cout<<i<<":"<<'\t'<<opc[i]<<endl;
	}
	cout<<endl;
}