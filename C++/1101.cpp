#include <iostream>
using namespace std;

int main(){
	int m = 1, n = 1, aux, soma = 0;

	while(m > 0 || n > 0){
		soma = 0;
		cin >> m >> n;

		if (m <= 0 || n <= 0)
			break;
		if ( n < m){
			aux = n;
			n = m;
			m = aux;
		}
		for (int i = m ; i <= n ; i ++){
			cout << i << " ";
			soma += i;
		}
		cout << "Sum=" << soma << endl;

	}

	return 0;
}
