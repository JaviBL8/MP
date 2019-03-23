#include <iostream>
#include "../include/Conversiones-Matriz2D.h"
using namespace std; 

int main (void)
{
	int fils, cols; 

	cout << "Filas = "; 
	cin >> fils; 
	cout << "Columnas = "; 
	cin >> cols;

	// INICIALIZACIÓN ALEATORIA

	cout<<"Matriz2D_1 : "<<endl;
	Matriz2D_1 matriz = AleatorizaMatriz2D_1 (fils, cols, 10);
	PintaMatriz2D_1 (matriz, fils, cols);

	cout<<"Matriz2D_1 COVERTIDA A Matriz2D_2 : "<<endl;
	Matriz2D_2 transformada = Conversion2D_1_a_2D_2(matriz,fils,cols);
	PintaMatriz2D_2 (transformada, fils, cols);

	cout<<"Vuelta a la estructura original : "<<endl;
	matriz = Conversion2D_2_a_2D_1(transformada,fils,cols);
	PintaMatriz2D_1 (matriz, fils, cols);

	Liberar(matriz,fils);

	return (0);
}