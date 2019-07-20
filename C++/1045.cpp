#include <iostream>
#include <cmath>
using namespace std;

int main (){

	float a, b, c;
	cin >> a >> b >> c;
	float maior, menor, medio;

	if ( a >= b && a >= c)
		maior = a;
	else if ( b >= a && b >= c)
		maior = b;
	else if ( c >= a && c >= b)
		maior = c;

	if ( a <= b && a <= c)
		menor = a;
	else if ( b <= a && b <= c)
		menor = b;
	else
		menor = c;

	medio = (a + b + c) - (maior + menor);

	if ( maior >= medio + menor)
		cout << "NAO FORMA TRIANGULO" << endl;
	else{
		if ( pow(maior,2) == pow(medio,2) + pow(menor,2))
			cout << "TRIANGULO RETANGULO" << endl;

		if ( pow(maior,2) > pow(medio,2) + pow(menor,2))
			cout << "TRIANGULO OBTUSANGULO" << endl;

		if ( pow(maior,2) < pow(medio,2) + pow(menor,2))
		 	cout << "TRIANGULO ACUTANGULO" << endl;

		if  ( maior == medio && medio == menor && menor == maior)
			cout << "TRIANGULO EQUILATERO" << endl;

		if  ( (maior == medio && medio != menor) ||
		      (medio == menor && menor != maior) ||
		      (menor == maior && maior != medio))
			cout << "TRIANGULO ISOSCELES" << endl;

    }
    return 0;
}
