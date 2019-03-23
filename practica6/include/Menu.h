#ifndef MENU
#define MENU

class Menu{	
private: 
    char *titulo;	//Titulo general del menu		
	char **opc;     //Cadenas de longitud variable que describen cada una de las opciones		
 	int	nopc;		//Numero de	opciones en	el menú		
public:		
	Menu();
	~Menu();
	Menu(const Menu &copia);
	void setTitulo(char titulo_[]);
	int getNumeroOpciones();
	void agregarOpcion(char opcion[]);
	Menu operator=(const Menu &men);
	void Reservar();
	void Liberar();
	void Imprimir();
};
#endif 