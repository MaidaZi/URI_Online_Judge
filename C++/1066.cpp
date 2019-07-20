#include <iostream>
using namespace std;

int main (){
	int valor;
	int contp = 0, conti = 0, contpos = 0, contneg = 0;
	for (int i = 1 ; i <= 5 ; i++){
		cin >> valor;
		if (valor % 2 == 0 )
			contp ++;
		else if (valor % 2 != 0)
			conti ++;

		if (valor > 0)
			contpos ++;
		else if (valor < 0)
			contneg ++;
	}
	cout << contp << " valor(es) par(es)" << endl;
	cout << conti << " valor(es) impar(es)" << endl;
	cout << contpos << " valor(es) positivo(s)" << endl;
	cout << contneg << " valor(es) negativo(s)" << endl;

    return 0;
}
