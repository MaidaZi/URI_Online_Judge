#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int x = 1, cont = 0, soma = 0;
	while( x != 0){
		cin >> x;
		cont = 0;
		soma = 0;
		if ( x == 0)
			break;
		for (int i = x; cont < 5 ; i++ ){
			if (i % 2 == 0){
				soma += i;
				cont ++;
			}
		}
		cout << soma << endl;
	}

	return 0;
}
