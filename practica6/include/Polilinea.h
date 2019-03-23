#ifndef POLILINEA_H
#define POLILINEA_H

#include <iostream>

using namespace std;

class Punto
{
private:
	int x,y;
public:
	Punto();
	Punto(int x_,int y_);
	/*Esta clase no necesita destructor porque son elementos
	estáticos, asi que usaré el propio de C++ como vimos en teoría*/
	int getX();
	int getY();
};

class Polilinea
{
private: 
	Punto *p;//Array de puntos
	int num;//Número de puntos
public: 
	Polilinea();
	Polilinea(int num_);
	Polilinea operator=(const Polilinea &poli);
	Polilinea(const Polilinea &p,int num_);
	~Polilinea();	
	void Agregar_Punto(Punto nuevo);
	void imprimir(const Polilinea& sec);
};

#endif