/*
(2.5 puntos) Construir una función recursiva que calcule la descomposición factorial de un número entero y la
guarde en un vector de enteros. La cabecera de la función debe ser:
void descomposicion (int n, int * factores, int& num_factores)
Por ejemplo, para calcular la descomposición factorial de 360 (360 = 23 × 32 × 5) se hará:
int v[100]; // 100 es un valor suficientemente grande
int n;
...
n = 0;
descomposicion (360, v, n);
y el resultado será:
n = 6
v = {2,2,2,3,3,5,?,...}
*/

#include <iostream>

using namespace std;

void descomposicion (int n, int *factores, int& num_factores){
	

	if (n%2==0)
	{
		factores[num_factores]=2;
		num_factores++;
		n=n/2;
		descomposicion(n,factores,num_factores);
	}
	else if (n%3==0)
	{
		factores[num_factores]=3;
		num_factores++;
		n=n/3;
		descomposicion(n,factores,num_factores);
	}
	else if (n%5==0)
	{
		factores[num_factores]=5;
		num_factores++;
		n=n/5;
		descomposicion(n,factores,num_factores);
	}
	else if (n%7==0)
	{
		factores[num_factores]=7;
		num_factores++;
		n=n/7;
		descomposicion(n,factores,num_factores);
	}
	else
	{
		factores[num_factores]=n;
		num_factores++;
	}
	
}

void imprimir(int *vector, int num_factores){

	for (int i = 0; i < num_factores; ++i)
	{
		cout<<vector[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int v[100];
	int n=0;

	descomposicion (360, v, n);	

	imprimir(v,n);

	return 0;
}