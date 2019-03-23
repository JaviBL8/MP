#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	const int TOPE=100;
	char cadena[TOPE];
	char *p;

	cout<<"Introduzca la cadena de caracteres: "<<endl;
	cin.getline(cadena,TOPE);

	p=cadena;
	while(*p!=' '&*p!='\0')p++;
	
	cout<<(p)<<endl;

	return 0;
}