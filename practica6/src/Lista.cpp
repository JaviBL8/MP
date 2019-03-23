#include "../include/Lista.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//----------------------LISTA-------------------------------
//Constructor por defecto
Lista::Lista(){
	contenido=NULL;
}
//Constructor por parámetros
Lista::Lista(int num){

	if (num>0)
	{
		contenido = new Celda;

		contenido->sig=0;

		Celda *p=contenido;

		for (int i = 1; i < num; ++i)
		{
			
			p->sig=new Celda;
			p=p->sig;			
		}

		p->sig=0;
	}
}
//Constructor de copia
Lista::Lista(const Lista &list){

	Celda *p=list.contenido;
	
	contenido=new Celda;
	Celda *aux=contenido;

	while(p!=NULL){
	
		aux->info=p->info;
		aux->sig=new Celda;
		aux=aux->sig;
		p=p->sig;
	}
	aux=NULL;
}
//Sobreacarga de operator +
Lista& Lista::operator+(const Lista &add){

	//Obtengo un puntero a la última posición actual
	Celda *aux=contenido;

	while(aux->sig!=NULL){
		aux=aux->sig;
	}

	Celda* p=add.contenido;

	while(p!=NULL){

		aux->info=p->info;
		aux->sig=new Celda;
		aux=aux->sig;
		p=p->sig;
	}

	aux=0;

	return *this;
}
//Sobrecarga de operador =
Lista& Lista::operator=(const Lista &list){

	if (this!=&list)
	{
	Liberar();

	Celda *aux=list.contenido;

	contenido=new Celda;

	Celda *p=contenido;

		while(aux!=NULL){
			p->info=aux->info;
			p->sig=new Celda;
			aux=aux->sig;
			p=p->sig;
		}
		p=NULL;
	}	

	return *this;
}
//Sobrecarga del operador []
void Lista::operator[](const int valor){

	Celda *aux=contenido;
	Celda *ant;

	for (int i = 0; i < valor; ++i)
	{
		ant=aux;
		aux=aux->sig;
	}

	ant->sig=aux->sig;

	delete aux;
	delete ant;
}
//Imprimo la lista
void Lista::Imprimir(){
	Celda *p = contenido;

    while (p!=0) {
        cout<< p->info <<'\t';
        p=p->sig;
    }
    cout << endl;

    delete p;
}
//Liberar memoria
void Lista::Liberar(){

	Celda *p, *ant;
	if (contenido!=0)
	{
		ant=contenido;
		p=contenido->sig;

	
		while(p!=0){
			delete ant;
			ant=p;
			p=p->sig;
		}

		delete ant;	
	}
}
/*Método para rellenar aleatóriamente una lista 
(para facilitar la comprensión del programa)*/
void Lista::Rellenar(){

	srand(time(0));

	Celda *p=contenido;

	while(p!=NULL){

		p->info=rand()%10;
		p=p->sig;
	}
}
//Destructor
Lista::~Lista(){

	Liberar();

}