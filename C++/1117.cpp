#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int cont = 0;
	double nota, media, soma;
	do{
		cin >> nota;

		if(nota >= 0 && nota <= 10){
			soma += nota;
			cont ++;
		}
		else
			cout << "nota invalida" << endl;

	} while (cont < 2);

	media = soma / 2.0;

	cout << "media = " << media << fixed << setprecision(2) << endl;

    return 0;
}
