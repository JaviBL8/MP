#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "../include/18_Calificaciones_ArrayStruct.h"

using namespace std;

const int NUM_NOTAS=4;
const int TAM_NOMBRE=80;
const int TAMANIO=100;

int main(int argc, char const *argv[])
{
	RegAlumno *alumnos=new RegAlumno [TAMANIO];
	double calificacion_media[TAMANIO];
	double pesos[NUM_NOTAS];
	double notas_alumno[NUM_NOTAS];
	int numalumnos=0;
	LeePesos(pesos,NUM_NOTAS);

	if (!CorrectosPesos(pesos,NUM_NOTAS))
	{
		return -1;
	}
	
	MuestraPesos(pesos,NUM_NOTAS);

	numalumnos=LeerAlumnos(alumnos);

	CalculaCalificacionesMedias(calificacion_media,alumnos,numalumnos,pesos,NUM_NOTAS);

	OrdenaVectorAlumnos(alumnos,calificacion_media,numalumnos);

	if (argc==3)
	{
		int min=atoi(argv[1]);
		int max=atoi(argv[2]);
		RegAlumno *nuevo=new RegAlumno [max-min];
		double medias_[max-min];
		int j=0;
		for (int i=min;i<max;++i)
		{
			nuevo[j]=alumnos[i];
			medias_[j]=calificacion_media[i];
			j++;
		}
		numalumnos=max-min;
		MuestraVectorAlumnos(nuevo,medias_,numalumnos);
	}
	else
	MuestraVectorAlumnos(alumnos,calificacion_media,numalumnos);

	return 0;
}