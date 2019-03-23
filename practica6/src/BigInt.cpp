#include <iostream> 
#include <time.h>
#include <stdlib.h>     /* srand, rand */
#include "../include/BigInt.h"

using namespace std;

//Constructor
BigInt::BigInt(){
	TAM=0;
	bigvector=new int[1];
	bigvector[0]=0;
}
//Destructor
BigInt::~BigInt(){
	delete []bigvector;
}
//Constructor por parámetros
BigInt::BigInt(int tam){
	TAM=tam;
	bigvector=new int[TAM];
	for (int i = 0; i < TAM; ++i)
	{
		bigvector[i]=0;
	}
}
//Constructor por parámetros
BigInt::BigInt(const BigInt &original){
	TAM=original.TAM;
	bigvector= new int[TAM];

	for (int i = 0; i < TAM; ++i)
	{
		bigvector[i]=original.bigvector[i];
	}
}
//Sobrecarga del operador =
BigInt BigInt::operator=(const BigInt &original){
	if (&original!=this)
	{
		delete[] bigvector;
	
	this->TAM=original.TAM;
	this->bigvector=new int[TAM];

		for(int i=0;i < original.TAM; i++){
			bigvector[i]=original.bigvector[i];
		}
	}
	return *this;
}
//Sobrecarga del operador + 
BigInt BigInt::operator+(const BigInt &sum){

	int tam;

	if (TAM<sum.TAM)
	{
		tam=sum.TAM;
	}else{
		tam=TAM;
	}
	
	BigInt res(tam+1);
	int tam_menor;

	for (int i = 0; i < tam; i++)
	{
		res.bigvector[i]=sum.bigvector[i]+bigvector[i];
	}

	bool acarreo=true;
	
	int valor;
	int j=0;

	while(acarreo){
		
		valor=res.bigvector[j]/10;
		if(valor!=0){
			res.bigvector[j]=res.bigvector[j]%10;
			res.bigvector[j+1]=res.bigvector[j+1]+valor;
		}
		else if (valor==0 and j==tam )
		{
			acarreo=false;
		}
		j++;
	}
	return res;
}

void BigInt::aleatorizar(){

	srand(time(0));

	for (int i = 0; i < TAM; ++i)
	{
		bigvector[i]=rand()%10;
	}
}

void BigInt::imprimir(){

	for (int i = 0; i < TAM; ++i)
	{
		cout<<bigvector[i]<<"	";
	}
	cout<<endl;
}

