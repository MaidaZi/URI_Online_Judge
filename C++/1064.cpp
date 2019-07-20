#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	double valor, soma = 0;
	int cont = 0;
	for (int i = 1 ; i <= 6 ; i++){
		cin >> valor;
		if (valor >= 0){
			cont ++;
			soma += valor;
		}
	}
	cout << cont << " valores positivos" << endl;
	cout << fixed << setprecision (1) << soma / (double)cont << endl;

    return 0;
}
