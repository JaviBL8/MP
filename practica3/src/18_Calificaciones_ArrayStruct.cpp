#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

const int NUM_NOTAS=4;
const int TAM_NOMBRE=80;
const int TAMANIO=100;

struct RegAlumno {
double notas[NUM_NOTAS];
char apellido_nombre[TAM_NOMBRE]; // Cadena "clásica"
};

double suma(double pesos[]){
	double suma=0;
	for (int i = 0; i < NUM_NOTAS; ++i)
	{
		suma+=pesos[i];
	}
	return suma;
}

void MuestraVectorAlumnos(RegAlumno alumnos[], double calificacion_media[], int total_alumnos){
	int x=0;
	for (int i = 0; i < total_alumnos; ++i)
	{
		string nombre;
		nombre=alumnos[i].apellido_nombre;
		cout<<nombre<<"\t";
		for (int j = 0; j < NUM_NOTAS; ++j)
		{
			cout<<alumnos[i].notas[j]<<"	";
		}
		cout<<"\t"<<calificacion_media[x]<<endl;
		x++;		
	}
}

void OrdenaVectorAlumnos(RegAlumno *alumnos,double calificacion_media[], int TAM){
	double temp=0;
	RegAlumno *temp_a= new RegAlumno[TAM];
	for(int i=1; i<TAM; i++){
        for(int j=0 ; j<TAM - 1; j++){
            if (calificacion_media[j] > calificacion_media[j+1]){
                    temp = calificacion_media[j];
                	temp_a[i-1] = alumnos[j];
                    calificacion_media[j] = calificacion_media[j+1];
                    alumnos[j] = alumnos[j+1];
                    calificacion_media[j+1] = temp;
                    alumnos[j+1] = temp_a[i-1];
            }
        }
	}
}

void LeePesos (double ponderaciones[], int num_pesos){
		
	for (int i = 0; i < num_pesos; ++i)
	{
		char num[3];
		cin.getline(num,100);
		ponderaciones[i]=atof(num);
	}
		
}

bool CorrectosPesos (double ponderaciones[], int num_pesos){
	double suma=0;
	for (int i = 0; i < NUM_NOTAS; ++i)
	{
		suma+=ponderaciones[i];
	}
	if(suma==100.0){
		return true;
	}else
	return false;
}

void MuestraPesos (double ponderaciones[], int num_pesos){
	for (int i = 0; i < num_pesos; ++i)
	{
		cout<<"Pesos calificacion "<<i<<":	"<<ponderaciones[i]<<endl;
	}
	cout<<endl;
}

/*La cabecera de esta función era:
int LeerAlumnos (RegAlumno datos[], int num_casillas);
Pero como int num_casillas no me hace falta(y no se a que se refiere)
lo he quitado, la función que me piden es int(yo usaría bool o void), 
así que devolveré el numero de alumnos por ejemplo.
*/
int LeerAlumnos (RegAlumno datos[]){
	int i=0;
	int total_alumnos=0;
	char *aux=datos[0].apellido_nombre;

	while(*aux!='*'){
	cin.getline(datos[i].apellido_nombre,TAM_NOMBRE);
	aux=datos[i].apellido_nombre;
		if(*aux!='*'){
			strcat(datos[i].apellido_nombre," ");	
			char nombre[TAM_NOMBRE];
			cin.getline(nombre,TAM_NOMBRE);
			strcat(datos[i].apellido_nombre,nombre);
				
				for (int j = 0; j < NUM_NOTAS; ++j)
				{	
					char num[3];
					cin.getline(num,100);
					datos[i].notas[j]=atof(num);
				}
			total_alumnos++;
			i++;
		}
	}
	return total_alumnos;
}

void CalculaCalificacionesMedias (double medias[],RegAlumno datos[], int num_alumnos,double ponderaciones[], int num_notas){

int media=0;
	for (int i = 0; i < num_alumnos; ++i)
	{
		for (int j = 0; j < num_notas; ++j)
		{
			media+=datos[i].notas[j]*ponderaciones[j];
		}
		medias[i]=media/100.0;
		media=0;
	}
}