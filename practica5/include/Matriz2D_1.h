#ifndef MATRIZ2D_1
#define MATRIZ2D_1

//Definición de tipo
typedef double TipoBase;
typedef TipoBase ** Matriz2D_1;

Matriz2D_1 CrearMatriz2D_1(int filas, int columnas); 

Matriz2D_1 AleatorizaMatriz2D_1 (int fils, int cols, int seed);

Matriz2D_1 CopiaMatriz2D_1 (Matriz2D_1 matriz,int fils, int cols);

Matriz2D_1 SubMatriz2D_1 (Matriz2D_1 matriz,int fil_desde, int col_desde, int fil_hasta,int col_hasta);

Matriz2D_1 LeeMatriz2D_1(Matriz2D_1 matriz, int filas, int columnas);

Matriz2D_1 EliminaFilaMatriz2D_1(Matriz2D_1 matriz, int fils, int cols, int borrar_fila);

Matriz2D_1 EliminaColumnaMatriz2D_1(Matriz2D_1 matriz, int fils, int cols, int borrar_columna);

Matriz2D_1 TraspuestaMatriz2D_1(Matriz2D_1 matriz, int fils, int cols);

Matriz2D_1 InvierteMatriz2D_1(Matriz2D_1 matriz, int fils, int cols);

void Liberar(Matriz2D_1 &matriz, int filas);

void PintaMatriz2D_1(Matriz2D_1 matriz, int filas, int columnas);

#endif