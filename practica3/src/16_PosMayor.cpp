#include <iostream>

using namespace std;

int * PosMayor(int *pv, int izda, int dcha){
	int *mayor=pv;
	for (int i=izda; i < dcha; i++)
	{
		if (*(pv+i)>*(mayor))
		{
			mayor=(pv+i);
		}
	}

	return mayor;
}