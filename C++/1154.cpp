#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int valor = 0, soma = 0 ;
	double med, cont = 0;

	do{
		cin >> valor;
		if (valor >= 0)	{
			soma = soma + valor;
			cont ++;
		}
	}while (valor >= 0);

	med = (double)soma / cont;
	cout << fixed << setprecision(2) << med << endl;

	return 0;
}
