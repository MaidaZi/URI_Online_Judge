#include <iostream>
using namespace std;

int main () {
	int combustivel = 0, alc = 0, gas = 0, die = 0;

	do{
		do{
			cin >> combustivel;
				switch (combustivel){
					case 1:
						alc ++;
					break;
					case 2:
						gas ++;
					break;
					case 3:
						die ++;
					break;
				}

		}while(combustivel >= 1 && combustivel <4);
	}while(combustivel < 1 || combustivel > 4);
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alc << endl;
	cout << "Gasolina: " << gas << endl;
	cout << "Diesel: " << die << endl;

    return 0;
}
