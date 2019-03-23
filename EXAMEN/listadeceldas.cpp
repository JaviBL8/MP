#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int TAM=10;

struct celda
{
	int valor;
	celda *sig;
};

void Imprimir(celda *q){
	celda *p = q;

    while (p->sig!=0) {
        cout<< p->valor <<'\t';
        p=p->sig;
    }
    cout << endl;

    delete p;
}

void Rellenar(celda *&p){

	p=new celda;
	p->sig=0;

	celda* aux=p;

	for (int i = 1; i <= TAM; ++i)
	{
		aux->valor=rand()%10;
		aux->sig=new celda;
		aux=aux->sig;
	}
}

void Listar(int t, celda *&p){

	int tamv=0;
	celda **aux;
	celda* q=p;

	if(TAM%t==0){
		tamv=TAM/t;
	}
	else{
		if ((TAM%t)*10>t*5)
		{
			tamv=TAM/t + 1;
		}
		else{
			tamv=TAM/t;
		}
	}

	aux = new celda*[tamv];
	int j=0;
	//Primero hago asignaciones
	for (int i = 0; i < TAM; ++i)
	{
		if (i%t+1==0)
		{
			aux[j]=q;
			j++;
		}
		else if(i==0){
			aux[j]=q;
			j++;
		}
		else{
			q=q->sig;
		}
	}/*
	//Ahora apunto a NULL y borro el puntero principal
	

	for (int i = 0; i < tamv; ++i)
	{
		q=aux[i];
		for (int j = 0; j < t; ++j)
		{
			if (q->sig!=NULL)
			{
				q=q->sig;
			}
		}
		q->sig=NULL;
	}
*/
	cout<<aux[1]->sig->valor<<endl;
}

int main()
{
	int t;

	cout<<"Introduzca t: "<<endl;
	cin>>t;

	//Creo 10 celdas con valores aleatorios para ver el funcionamiento
	srand(time(0));

	celda* p;

	Rellenar(p);
	Imprimir(p);

	Listar(t,p);


	return 0;
}