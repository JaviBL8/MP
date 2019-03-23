#ifndef CALIFICACIONES_ARRAY_STRUCT_H
#define CALIFICACIONES_ARRAY_STRUCT_H

using namespace std;

struct RegAlumno{};

double suma(double pesos[]);

void MuestraVectorAlumnos(RegAlumno alumnos[], double calificacion_media[], int total_alumnos);

void MuestraPesos (double ponderaciones[], int num_pesos);

void OrdenaVectorAlumnos(RegAlumno *alumnos,double calificacion_media[], int TAM);

void LeePesos (double ponderaciones[], int num_pesos);

bool CorrectosPesos (double ponderaciones[], int num_pesos);

int LeerAlumnos (RegAlumno datos[], int num_casillas);

void CalculaCalificacionesMedias (double medias[],RegAlumno datos[], int num_alumnos,double ponderaciones[], int num_notas);


#endif
