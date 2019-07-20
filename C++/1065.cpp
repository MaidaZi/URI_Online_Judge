#include <iostream>
using namespace std;

int main (){
	int valor;
	int cont = 0;
	for (int i = 1 ; i <= 5 ; i++){
		cin >> valor;
		if (valor % 2 == 0){
			cont ++;
		}
	}
	cout << cont << " valores pares" << endl;

    return 0;
}
