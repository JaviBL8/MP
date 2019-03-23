#ifndef LISTA_H
#define LISTA_H 

struct Celda{
 	double info;		
	Celda *sig;
};

class Lista{	
private:
	Celda *contenido;
public:
	Lista();
	Lista(int num);
	Lista(const Lista &list);
	Lista& operator+(const Lista &add);
	Lista& operator=(const Lista &list);
	void operator[](const int valor);
	void Liberar();
	void Imprimir();
	void Rellenar();
	~Lista();
};	
#endif