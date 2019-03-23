/* (1.5 puntos) Implemente una función recursiva que escriba en la salida estándar un entero, separando cada
grupo de 3 cifras con un punto. Por ejemplo, si el entero es -1234567, deberá escribir -1.234.567.*/

#include <iostream>

using namespace std;

void separar(int n){

	//Le doy la vuelta al número y cada 3 número imprimo un punto
	int aux[100];

	int tam;

	for(tam=0;n%10!=0;tam++)
	{
		aux[tam]=n%10;
		n=n/10;	
	}
	
	for (int i = tam -1;i >= 0; --i)
	{
		cout<<aux[i];
		if (i%3==0 and i!=0)
		{
			cout<<".";
		}
	}

	cout<<endl;
}

int main()
{
	int n;
	
	cout<<"Introduzca un número:	"<<endl;
	cin>>n;

	separar(n);

	return 0;
}