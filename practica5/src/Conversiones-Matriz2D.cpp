#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "../include/Conversiones-Matriz2D.h"

using namespace std;

Matriz2D_1 CrearMatriz2D_1(int filas, int columnas){
	Matriz2D_1 matriz = new TipoBase *[filas];

	for (int i = 0; i < filas; ++i)
	{
		matriz[i]=new TipoBase[columnas];
	}

	return matriz;
}

Matriz2D_2 CrearMatriz2D_2(int filas, int columnas){
	Matriz2D_2 matriz = new TipoBase2 *[filas];

	matriz[0]=new TipoBase2[filas*columnas];

	for (int i =1;i < filas; ++i)
	{
		matriz[i]=matriz[i-1]+columnas;
	}

	return matriz;
}

Matriz2D_1 AleatorizaMatriz2D_1 (int fils, int cols, int seed){

	Matriz2D_1 matriz=CrearMatriz2D_1(fils,cols);

	srand(time(NULL));

	for (int i = 0; i < fils; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{		
			matriz[i][j]=rand()%seed;
		}
	}
	
	return matriz;
}



void Liberar(Matriz2D_1 &matriz, int filas){
	for (int i = 0; i < filas; ++i)
	{
		delete [] matriz[i];
	}
	delete [] matriz;
}

void Liberar(Matriz2D_2 &matriz){
	
	delete [] matriz[0];
	delete [] matriz;
}

void PintaMatriz2D_1(Matriz2D_1 matriz, int filas, int columnas){

	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			cout<<matriz[i][j]<<"	";
		}
		cout<<endl;
	}
}

void PintaMatriz2D_2(Matriz2D_2 matriz, int filas, int columnas){

	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			cout<<matriz[i][j]<<"	";
		}
		cout<<endl;
	}
}

Matriz2D_1 Conversion2D_2_a_2D_1(Matriz2D_2 matriz,int filas, int columnas){

	Matriz2D_1 transformada=CrearMatriz2D_1(filas,columnas);

	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			transformada[i][j]=matriz[i][j];
		}
	}	

	Liberar(matriz);
	return transformada;
}

Matriz2D_2 Conversion2D_1_a_2D_2(Matriz2D_1 matriz,int filas, int columnas){

	Matriz2D_2 transformada=CrearMatriz2D_2(filas,columnas);

	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			transformada[i][j]=matriz[i][j];
		}
	}	
	Liberar(matriz,filas);
	return transformada;
}