#ifndef BIGINT_H
#define BIGINT_H

class BigInt
{
private:
	int *bigvector;
	int TAM;
public:
	BigInt();
	BigInt(int tam);
    BigInt(const BigInt &original);
	~BigInt();
	BigInt operator+(const BigInt &original);
	BigInt operator=(const BigInt &original);
	void aleatorizar();
	void imprimir();
};
#endif