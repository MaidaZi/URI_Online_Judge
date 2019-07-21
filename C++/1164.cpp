#include <iostream>
using namespace std;

int main (){
	int qtd, n, soma = 0;
	cin >> qtd;

	int i = 0;
	while( i < qtd ){
		cin >> n;

		soma = 0;
		for(int j = 1; j < n ; j++){
			if (n % j == 0){
				soma += j;
			}
		}
		if (soma == n ){
			cout << n << " eh perfeito" << endl;
		}
		else {
			cout << n << " nao eh perfeito" << endl;
		}
		i++;
	}
	return 0;
}
