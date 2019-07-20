#include <iostream>

using namespace std;

int main (){

	int a, b, c;
	cin >> a >> b >> c;

	int maior, menor, medio ;

	if ( a < b && a < c)
		menor = a;
	else if ( b < a && b < c)
		menor = b;
	else
		menor = c;

	if ( a > b && a > c)
		maior = a;
	else if ( b > a && b > c)
		maior = b;
	else
		maior = c;

	medio = (a + b + c) - (maior + menor);

	cout << menor << endl << medio << endl  << maior << endl << endl;
	cout << a << endl << b << endl << c << endl;

    return 0;
}
