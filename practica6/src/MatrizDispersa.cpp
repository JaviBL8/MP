#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "../include/MatrizDispersa.h"

using namespace std;

//Por defecto
MatrizDispersa::MatrizDispersa(){
	nfilas=0;
	ncolumnas=0;
	valores=NULL;
	int numeroValores=0;
}
//Por parametros
MatrizDispersa::MatrizDispersa(int nvalores, int nfilas_, int ncolumnas_){
	srand(time(0));

	nfilas=nfilas_;
	ncolumnas=ncolumnas_;
	numeroValores=nvalores;
	valores = new Valor[nvalores];
	
	int aux_c=0,aux_f=0;
	for (int i = 0; i < nvalores; ++i)
	{
		aux_f=rand()%nfilas_;
		aux_c=rand()%ncolumnas_;

		bool duplicado=false;

		for (int j = 0; j <= i; ++j)
		{
			if (valores[i].fila==aux_f and valores[i].columna==aux_c)
			{
				duplicado=true;
				break;
			}
		}
		if (duplicado)
		{
			i--;
		}
		else{
			valores[i].fila=aux_f;
			valores[i].columna=aux_c;
			valores[i].valor=(rand()%10)+1;
		}
	} 
}
//Destructor
MatrizDispersa::~MatrizDispersa(){

	delete valores;
}
//Constructor de copia 1
MatrizDispersa::MatrizDispersa(const MatrizDispersa &copia){

	nfilas=copia.nfilas;
	ncolumnas=copia.ncolumnas;
	numeroValores=copia.numeroValores;

	valores = new Valor[numeroValores];

	for (int i = 0; i < numeroValores; ++i)
	{
		Valor val(copia.valores[i].fila, copia.valores[i].columna, copia.valores[i].valor);
		valores[i] = val;
	}
}
//Necesito esta función para poder determinar el número máximo de filas y columnas
int buscar(int  vector[], int tamano) {

	int val=0;

	for (int i = 0; i < tamano; ++i)
	{
		if (val<vector[i])
		{
			val=vector[i];
		}
	}

	return val;
}   
//Constructor de copia  2
MatrizDispersa::MatrizDispersa(int filas[], int columnas[], double valor_[], int nf, int nc, int nv){

	numeroValores=nv;
  	nfilas=nf;
  	ncolumnas=nc;

	valores=new Valor[numeroValores];

	for (int i = 0; i < numeroValores; ++i)
	{
		valores[i].fila=filas[i];
		valores[i].columna=columnas[i];	
		valores[i].valor=valor_[i];
	}
}
//Sobrecarga del operador =
MatrizDispersa MatrizDispersa::operator=(const MatrizDispersa &mat){

	if (this!=&mat)
	{
		valores=0;

		delete valores;

		this->ncolumnas=mat.ncolumnas;
		this->nfilas=mat.nfilas;
		this->numeroValores=mat.numeroValores;

		valores = new Valor[numeroValores];

		for (int i = 0; i < numeroValores; ++i)
		{
			valores[i]=mat.valores[i];
		}
	}

	return *this;
}
//Imprimir matriz
void MatrizDispersa::imprimir(int nv){

cout<<endl;
bool aux=false;

	for (int i = 0; i < nfilas; ++i)
	{
		for (int j = 0; j < ncolumnas; ++j)
		{
			
			for (int x = 0; x < nv; ++x)
			{
				if (valores[x].fila==i and valores[x].columna==j)
				{
					cout<<valores[x].valor<<'\t';
					aux=true;
				}
			}
			if (aux==false)
			{
				cout<<"0"<<'\t';
			}
			else{
				aux=false;
			}
		}
		cout<<endl;
	}
}