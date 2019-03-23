#ifndef MATRIZ2D
#define MATRIZ2D

//Definición de tipo
typedef double TipoBase;
typedef TipoBase ** Matriz2D_1;

typedef double TipoBase2;
typedef TipoBase2 ** Matriz2D_2;

Matriz2D_1 CrearMatriz2D_1(int filas, int columnas);

Matriz2D_2 CrearMatriz2D_2(int filas, int columnas);

Matriz2D_1 AleatorizaMatriz2D_1 (int fils, int cols, int seed);

void Liberar(Matriz2D_1 &matriz, int filas);

void Liberar(Matriz2D_2 &matriz);

void PintaMatriz2D_1(Matriz2D_1 matriz, int filas, int columnas);

void PintaMatriz2D_2(Matriz2D_2 matriz, int filas, int columnas);

Matriz2D_1 Conversion2D_2_a_2D_1(Matriz2D_2 matriz,int filas, int columnas);

Matriz2D_2 Conversion2D_1_a_2D_2(Matriz2D_1 matriz,int filas, int columnas);

#endif