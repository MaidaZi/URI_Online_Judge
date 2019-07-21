#include <iostream>
using namespace std;

int main() {
	int num, qtd, cont = 0;
	cin >> qtd;
	for (int j = 0; j < qtd; j ++){
		cont = 0;
		cin >> num;
		for (int i = 1 ; i <= num ; i++){
			if (num % i == 0)
				cont ++;

		}
		if (cont > 2)
			cout << num << " nao eh primo" << endl;
		else
			cout << num << " eh primo" << endl;
	}
    return 0;
}
