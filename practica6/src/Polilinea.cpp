#include "../include/Polilinea.h"
#include <iostream>

using namespace std;

//----------------------PUNTO---------------------------
//Constructor por defecto de un punto
Punto::Punto(){
	x=0;
	y=0;
}
//Constructor por parámetros de un punto 
Punto::Punto(int x_,int y_){
	x=x_;
	y=y_;
}
//Funciones get
int Punto::getX(){
	return x;
}
int Punto::getY(){
	return y;
}
//--------------------POLILÍNEA--------------------------
//Constructos por defecto de una línea
Polilinea::Polilinea(){
	num=1;
	p=new Punto[2];
}
//Constructor por parámetros
Polilinea::Polilinea(int num_){
	num=num_;
	p=new Punto[num];
}
//Constructor de copia
Polilinea::Polilinea(const Polilinea &p_,int num_){
	num=num_;
	p=new Punto[num];

	for (int i = 0; i < num; ++i)
	{
		p[i]=p_.p[i];
	}
}
//Destructor
Polilinea::~Polilinea(){
	
	delete[] p;
	num=0;
}
//Operador de asignación
Polilinea Polilinea::operator=(const Polilinea &poli){
	if (this!=&poli)
	{
		if (this->num!=0)
		{
			delete[] p;
		}
		
		this->num=poli.num;
		this->p=new Punto[num];

		for (int i = 0; i < num; ++i)
		{
			this->p[i]=poli.p[i];
		}
	}
	return *this;
}
//Agrego un punto al final
void Polilinea::Agregar_Punto(Punto nuevo){


	Polilinea aux(num+1);

	for (int i = 0; i < num+1; ++i)
	{
		if (i<num)
		{
			aux.p[i]=p[i];
		}
		else{
			aux.p[i]=nuevo;
		}
	}
	p=0;

	*this=aux;
}
//Imprimo la clase
void Polilinea::imprimir(const Polilinea& sec){

cout<<"->";
	for (int i = 0; i < sec.num; ++i)
	{
		cout<<"("<<sec.p[i].getX()<<","<<sec.p[i].getY()<<")";
	}
	cout<<endl;
}
