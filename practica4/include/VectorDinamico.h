#ifndef VECTORDINAMICO
#define VECTORDINAMICO

enum TipoRedimension {DeUnoEnUno,EnBloques,Duplicando};

double * Redimensiona(double *p, TipoRedimension tipo, int &cap);

double * incremento_en_bloque(double *p, int &cap, int incremento);

void imprimir(double *p, int cap);


#endif