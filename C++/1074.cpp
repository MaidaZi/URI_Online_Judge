#include <iostream>
using namespace std;

int main (){
	int qtd, valor;
	cin >> qtd;

	for( ; qtd >= 1 ; qtd --){
		cin >> valor;

		if ( valor == 0)
			cout << "NULL" << endl;

		else if ( valor % 2 == 0 ){
			cout << "EVEN ";
			if ( valor > 0 )
				cout << "POSITIVE" << endl;
			else if ( valor < 0)
				cout << "NEGATIVE" << endl;
			else
				cout << "NULL" << endl;
		}
		else {
			cout << "ODD ";
			if ( valor > 0 )
				cout << "POSITIVE" << endl;
			else if ( valor < 0)
				cout << "NEGATIVE" << endl;
			else
				cout << "NULL" << endl;
		}
	}
    return 0;
}
