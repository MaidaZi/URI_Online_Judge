#include <iostream>
using namespace std;

int main(){
	int x, z, soma = 0, cont = 0;
	cin >> x;
	do {
		cin >> z;
	}while( z <= x );

	for ( int i = x; soma < z ; i++){
		soma = soma + i;
		cont ++;
	}
	cout << cont << endl;

	return 0;
}
