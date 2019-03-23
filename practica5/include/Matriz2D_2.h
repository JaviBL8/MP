#ifndef MATRIZ2D_2
#define MATRIZ2D_2

//Definición de tipo
typedef double TipoBase;
typedef TipoBase ** Matriz2D_2;

Matriz2D_2 CrearMatriz2D_2(int filas, int columnas); 

Matriz2D_2 AleatorizaMatriz2D_2 (int fils, int cols, int seed);

Matriz2D_2 CopiaMatriz2D_2 (Matriz2D_2 matriz,int fils, int cols);

Matriz2D_2 SubMatriz2D_2 (Matriz2D_2 matriz,int fil_desde, int col_desde, int fil_hasta,int col_hasta);

Matriz2D_2 LeeMatriz2D_2(Matriz2D_2 matriz, int filas, int columnas);

Matriz2D_2 EliminaFilaMatriz2D_2(Matriz2D_2 matriz, int fils, int cols, int borrar_fila);

Matriz2D_2 EliminaColumnaMatriz2D_2(Matriz2D_2 matriz, int fils, int cols, int borrar_columna);

Matriz2D_2 TraspuestaMatriz2D_2(Matriz2D_2 matriz, int fils, int cols);

Matriz2D_2 InvierteMatriz2D_2(Matriz2D_2 matriz, int fils, int cols);

void Liberar(Matriz2D_2 &matriz);

void PintaMatriz2D_2(Matriz2D_2 matriz, int filas, int columnas);

#endif