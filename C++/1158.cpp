#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int qtd, x, y, cont1 = 0, soma = 0;
	cin >> qtd;

	for (int i = 0; i < qtd ; i++){
		cin >> x >> y;
		cont1 = 0;
		soma = 0;
		for( ; cont1 < y ; x ++){
			if (x % 2 != 0){
				soma += x;
				cont1 ++;
			}
		}
		cout << soma << endl;
	}

	return 0;
}
