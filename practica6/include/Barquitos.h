#ifndef BARQUITOS_H
#define BARQUITOS_H

class juego
{
private:
	int filas,columnas;
	int **matriz;
public:
	juego();
	juego(int filas_, int columnas_);
	void rellenar();
	void imprimir();
	juego(const juego &original);
	bool comprobar_pos(int fil, int col, int tam, char orientacion);
	void set(int fil, int col, int tam, char orientacion);
	juego& operator=(const juego &jue);
	~juego();
};
	
#endif