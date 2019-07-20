#include <iostream>
using namespace std;

int main (){
	double valor;
	int cont = 0;
	for (int i = 1 ; i <= 6 ; i++){
		cin >> valor;
		if (valor >= 0)
			cont ++;
	}
	cout << cont << " valores positivos" << endl;

    return 0;
}
