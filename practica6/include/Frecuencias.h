#ifndef FRECUENCIAS
#define FRECUENCIAS

class Pareja{		
private:
	int	dato;	//valor		
	int	nveces;	//numero de	repeticiones
public:
	int getdato();		
	int getnveces();
	void setdato(int dato_);
	void setnveces(int nveces_);
};

class Frecuencias{	
private:		
	Pareja *parejas;	//array	de	objetos	de	la	clase	Pareja		
	int	npares;			//numero de	objetos	almacenados	en	el	array		
public:		
	Frecuencias();
	Frecuencias(const Frecuencias &copia);
	Frecuencias operator=(const Frecuencias &fre);
	~Frecuencias();
	void AgregarValor(int valor);
	void Imprimir();
};

#endif