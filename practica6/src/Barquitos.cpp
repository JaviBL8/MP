#include "../include/Barquitos.h"
#include <time.h>
#include <stdlib.h>     /* srand, rand */
#include <iostream>

using namespace std;
//Constructor por defecto
juego::juego(){
	int filas=0,columnas=0;
}
//Constructor por parámetros
juego::juego(int filas_, int columnas_){
	
	//Construyo matriz
	columnas=columnas_;
	filas=filas_;
	matriz=new int*[filas];

	for (int i = 0; i < columnas; ++i)
	{
		matriz[i]=new int [columnas];
	}

	rellenar();
}
//Constructor de copia
juego::juego(const juego &original){
	filas=original.filas;
	columnas=original.columnas;
	matriz=new int*[original.filas];

	for (int i = 0; i < original.columnas; ++i)
	{
		matriz[i]=new int [original.columnas];
	}

	for (int i = 0; i < original.filas; ++i)
	{
		for (int j = 0; j < original.columnas; ++j)
		{
			matriz[i][j]=original.matriz[i][j];
		}
	}
}
bool juego::comprobar_pos(int fil, int col, int tam, char orientacion){

	for (int i = 0; i < tam; ++i)
	{
		if (orientacion=='V'){
			if (matriz[fil+i][col]!=9){
				return false;
			}
		}
		else if (orientacion=='H'){
			if(matriz[fil][col+i]!=9){
					return false;
			}
		}
	}
	return true;
}
juego& juego::operator=(const juego &jue){
	if(&jue!=this){
		if (this->columnas!=0)
		{
			for (int i = 0; i < this->filas; ++i)
			{
				delete []matriz[i];
			}
			delete matriz;
		}
	this->filas=jue.filas;
	this->columnas=jue.columnas;
	this->matriz=new int*[jue.filas];

	for (int i = 0; i < jue.columnas; ++i)
	{
		this->matriz[i]=new int [jue.columnas];
	}

	for (int i = 0; i < jue.filas; ++i)
	{
		for (int j = 0; j < jue.columnas; ++j)
		{
			this->matriz[i][j]=jue.matriz[i][j];
		}
	}

	}
	return *this;
}
//Cargo barco en mapa
void juego::set(int fil,int col,int tam, char orientacion){

	if (orientacion=='H')
	{
		for (int i = 0; i < tam; ++i)
		{
			matriz[fil][col+i]=tam;
		}
	}
	else{
		for (int i = 0; i < tam; ++i)
		{
			matriz[fil+i][col]=tam;
		}
	}
}
//Relleno matriz
void juego::rellenar(){

	int barco_fila, barco_columna;

	srand(time(NULL));	

	for (int i = 0; i < filas; ++i)
	{
		for (int x = 0; x < columnas; ++x)
		{
			if (matriz[i][x]==0)
			{
				
			if ((rand()%columnas)%5==0)
				{
					barco_columna=1+rand()%4;
					if (i+barco_columna<filas)
					{
						int s=i;
						for (s; s < i+barco_columna; ++s)
						{
							matriz[s][x]=barco_columna;
						}
					matriz[s][x]=9;		
					}
					else{
						matriz[i][x]=9;
					}	
				}
			//Supondré que el tamaño máximo que puede tomar un barco es 4
			else{
				if((rand()%filas)%5==0){
				barco_fila=1+rand()%4;
					if (x+barco_fila<columnas)
					{
						int j=x;
						for (j; j < x+barco_fila; ++j)
						{
							matriz[i][j]=barco_fila;
						}
					//matriz[i][j]=9;
					x+=barco_fila;
					}
					else{
						matriz[i][x]=9;
					}
				}
				else{
					matriz[i][x]=9;
				}
			}
		}
		}		
	}
}
//Imprimir la matriz
void juego::imprimir(){

	cout<<endl;
	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			cout<<matriz[i][j]<<"	";
		}
		cout<<endl;
	}
}
//Destructor
juego::~juego(){
	
	for (int i = 0; i < filas; ++i)
	{
		delete []matriz[i];
	}
	delete matriz;
}