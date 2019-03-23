#include <iostream>	
#include "VectorDinamico.h"
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]){

    int TAM = 5;
    double n=1;
    double *p = new double [TAM];

    if (argc==1)
    {
        cout<<"Reserva de uno en uno \nIntruduzca los elementos ('FIN' para terminar)"<<endl;
    }
    else if (argc==2)
    {
        n=atof(argv[1]);    
        if (atof(argv[1])==1)
        {
            cout<<"Reserva de uno en uno \nIntruduzca los elementos ('FIN' para terminar)"<<endl;
        }
        else if (atof(argv[1])==2)
        {
            cout<<"Reserva en bloques \nIntruduzca los elementos ('FIN' para terminar)"<<endl;
        }
        else if (atof(argv[1])==3)
        {
            cout<<"Reserva duplicando \nIntruduzca los elementos ('FIN' para terminar)"<<endl;
        }
        else
            return -1;
    }
    else{return -1;}
    
        string numero;
        int tamano=0;
        bool end=false;
            
        while(end==false){
            if (numero!="FIN")
            {
                cin>>numero;

                double num=atof(numero.c_str());
                if (tamano<TAM)
                {
                    p[tamano]=num;
                    tamano++;
                }
                else{

                    if (n==1){p=Redimensiona(p,DeUnoEnUno,TAM);}
                    else if (n==2){p=Redimensiona(p,EnBloques,TAM);}
                    else if (n==3){p=Redimensiona(p,Duplicando,TAM);}
                    
                    p[tamano]=num;
                    tamano++;
                }
            }
            else 
                end=true;
        }    
        cout << "Pintando array:" << endl;
        imprimir(p, TAM);   

    return 0;
    
}