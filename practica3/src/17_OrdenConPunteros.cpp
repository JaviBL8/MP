#include <iostream>

using namespace std;


void intercambiar(int **pi1,int **pi2){
	int *tmp;

	tmp=*pi1;
	*pi1=*pi2;
	*pi2=tmp;
}

void Ordena (int *vec, int **ptr, int izda, int dcha){

int minimo;
int pos_min;

for (int i = 0; i < dcha-izda; i++)
ptr[i]=&vec[izda+i];

int primera=0;
int ultima=dcha-izda;

for (int tope=primera;tope<ultima;tope++)
{
	minimo=*(ptr[tope]);
	pos_min=tope;
		for (int i = tope+1;i<ultima; i++)
		{	
			if (*ptr[i]<minimo)
			{
				pos_min=i;
				minimo=*(ptr[i]);
			}
		}
	intercambiar(&ptr[tope],&ptr[pos_min]);
}

}