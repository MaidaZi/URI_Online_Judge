#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int cont = 0, escolha = 1;
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

	cout << "media = " << fixed << setprecision(2) << media << endl;

	while(escolha == 1 || escolha != 2){
		media = 0; soma = 0; cont = 0;

		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> escolha;

		if (escolha < 1 || escolha > 2)
			continue;

		else if (escolha == 1){
			do{
				cin >> nota;
				if(nota >= 0 && nota <= 10){
					soma += nota;
					cont ++;
				}
				else
					cout << "nota invalida" << endl;

			}while (cont < 2);
			media = soma / 2.0;
			cout << "media = " << fixed << setprecision(2) << media << endl;

		}
	}
    return 0;
}
