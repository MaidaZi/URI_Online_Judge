#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int qtd, porta, cont = 0 ;
	cin >> qtd;

	for (int i = 0 ; i < qtd ; i++){
		cin >> porta ;
		if (porta != 1)
			cont++;
	}
	cout << cont << endl;

	return 0;
}
