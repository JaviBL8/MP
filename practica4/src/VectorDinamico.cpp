#include <iostream>	
#include "VectorDinamico.h"

using namespace std;

double * Redimensiona(double *p, TipoRedimension tipo, int &cap){
    
    int bloque=3;
    if (tipo==DeUnoEnUno)
    {
        p=incremento_en_bloque(p,cap,1);
    }
    else if (tipo==EnBloques)
    {
        p=incremento_en_bloque(p,cap,bloque);
    }
    else if(tipo==Duplicando)
    {
       p=incremento_en_bloque(p,cap,cap);
    }
    return p;

}

double * incremento_en_bloque(double *p, int &cap, int incremento) {

    
    double * nueva = new double [cap + incremento];

    
    for (int i= 0; i<cap; i++) {
        nueva[i] = p[i];
    }
    cap += incremento;

    delete [] p;

    return (nueva);

}

void imprimir(double *v, int cap) {

    for (int i = 0; i < cap; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

}
