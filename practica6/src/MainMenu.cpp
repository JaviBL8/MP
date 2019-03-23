#include <iostream>
#include "../include/Menu.h"

using namespace std;

int main(){
	

	char titulo_[4]={'W','O','W','\n'};
	char opcion1[6]={'j','u','g','a','r',' '};
	char opcion2[6]={'s','a','l','i','r',' '};

	cout<<"Pruebo constructor por defecto\n";
	Menu a;
	cout<<"\nMetodo setTitulo(WOW)";
	a.setTitulo(titulo_);
	cout<<"\nAñadir opciones (jugar,salir)\n";
	a.agregarOpcion(opcion1);
	a.agregarOpcion(opcion2);
	a.Imprimir();

	cout<<"Pruebo constructor de copia (Menu b(a))\n";
 	Menu b(a);
 	b.Imprimir();

	cout<<"Pruebo operador de asignación (Menu c=a)\n";
	Menu c;
	c=a;
	c.Imprimir();
}