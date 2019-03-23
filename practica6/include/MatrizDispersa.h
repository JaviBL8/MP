#ifndef MATRIZ_DISPERSA
#define MATRIZ_DISPERSA
#include "Valor.h"

class	MatrizDispersa{	
private:		
	int	nfilas	;		 //numero	de	filas	de	la	matriz		
	int	ncolumnas;		 //	numero	de	columnas 	de	la	matriz			
	Valor *valores;		 //	Array	para	almacenar	los	valores	significativos		
	int	numeroValores;	 //	Numero	de	valores	significativos	almacenados		
public:	
	MatrizDispersa();
	MatrizDispersa(int nvalores, int nfilas_, int ncolumnas_);
	~MatrizDispersa();
	MatrizDispersa(const MatrizDispersa &copiar);
	MatrizDispersa(int filas[], int columnas[], double valor_[],int nf,int nc, int nv);
	MatrizDispersa operator=(const MatrizDispersa &mat);
	void imprimir(int nv);
};		
#endif 