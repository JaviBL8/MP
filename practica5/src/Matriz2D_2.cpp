#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "../include/Matriz2D_2.h"

using namespace std;

Matriz2D_2 CrearMatriz2D_2(int filas, int columnas){
	Matriz2D_2 matriz = new TipoBase *[filas];

	matriz[0]=new TipoBase[columnas*filas];
	for (int i = 1; i < filas; ++i)
	{
		matriz[i]=matriz[i-1]+columnas;	
	}

	return matriz;
}


Matriz2D_2 AleatorizaMatriz2D_2 (int fils, int cols, int seed){

	Matriz2D_2 matriz=CrearMatriz2D_2(fils,cols);

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


Matriz2D_2 CopiaMatriz2D_2 (Matriz2D_2 matriz,int fils, int cols){

	Matriz2D_2 copia=CrearMatriz2D_2(fils,cols);

	srand(time(NULL));

	for (int i = 0; i < fils; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{		
			copia[i][j]=matriz[i][j];
		}
	}
	
	return copia;
}


Matriz2D_2 SubMatriz2D_2 (Matriz2D_2 matriz,int fil_desde, int col_desde, int fil_hasta,int col_hasta){

	int fils=fil_hasta - fil_desde;
	int cols=col_hasta - col_desde;

	Matriz2D_2 submatriz=CrearMatriz2D_2(fils,cols);

	for (int i = fil_desde; i < fil_hasta; ++i)
	{
		for (int j = col_desde; j < col_hasta; ++j)
		{		
			submatriz[i][j]=matriz[i][j];
		}
	}
	
	return submatriz;
}


Matriz2D_2 LeeMatriz2D_2(Matriz2D_2 matriz, int filas, int columnas){

	TipoBase valor;

	for (int i = 0; i < filas; ++i)
	{
		for (int j = 0; j < columnas; ++j)
		{
			cout<<"FILA "<<i<<"	COLUMNA "<<j<<endl;
			cin>>valor;
		
			matriz[i][j]=valor;
		}
	}
	return matriz;
}


Matriz2D_2 EliminaFilaMatriz2D_2(Matriz2D_2 matriz, int fils, int cols, int borrar_fila){

	Matriz2D_2 matriznueva = CrearMatriz2D_2 (fils - 1, cols);

	if (borrar_fila < fils) {


		for (int f=0, f2=0; f<fils - 1; f++, f2++) {

			if (f == borrar_fila) {
				f2++;
			}
			for (int c=0; c<cols; c++) {
				matriznueva[f][c] = matriz[f2][c];
			}
		}
	}
	return matriznueva;
}


Matriz2D_2 EliminaColumnaMatriz2D_2(Matriz2D_2 matriz, int fils, int cols, int borrar_columna){

	Matriz2D_2 matriznueva = CrearMatriz2D_2 (fils, cols -1 );
 
	if (borrar_columna < cols) {


		for (int c=0, c2=0; c<cols - 1; c++, c2++) {

			if (c == borrar_columna) {
				c2++;
			}
			for (int f=0; f<fils; f++) {
				matriznueva[f][c] = matriz[f][c2];
			}
		}
	}

	return matriznueva;
}


Matriz2D_2 TraspuestaMatriz2D_2(Matriz2D_2 matriz, int fils, int cols){

	Matriz2D_2 nueva=CrearMatriz2D_2(fils,cols);

	for (int i = 0; i < fils; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			nueva[i][j]=matriz[j][i];
		}
	}
	return nueva;
}

Matriz2D_2 InvierteMatriz2D_2 (Matriz2D_2 matriz, int fils, int cols) {

	Matriz2D_2 matriznueva = CrearMatriz2D_2 (fils, cols);

	for (int f1=0,f2=fils-1; f1<fils; f1++,f2--) {

		
		for (int c=0; c<cols; c++) {
			
			matriznueva[f1][c] = matriz[f2][c];
		}
	}

	return matriznueva;
}

void Liberar(Matriz2D_2 &matriz){

	delete [] matriz[0];

	delete [] matriz;
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