#include <iostream>
using namespace std;

int main (){
	int x;
	cin >> x;
	cout << x << endl;
	if (x > 0 && x < 1000000){
		// Para 100 reais
		int cem = 0;
		while ( x >= 100 ){
			x = x - 100;
			cem ++;
		}
		cout << cem << " nota(s) de R$ 100,00" << endl;
		// Para 50 reais
		int cinq = 0;
		while ( x >= 50 ){
			x = x - 50;
			cinq ++;
		}
		cout << cinq << " nota(s) de R$ 50,00" << endl;
		// Para 20 reais
		int vin = 0;
		while ( x >= 20 ){
			x = x - 20;
			vin ++;
		}
		cout << vin << " nota(s) de R$ 20,00" << endl;

		// Para 10 reais
		int dez = 0;
		while ( x >= 10 ){
			x = x - 10;
			dez ++;
		}
		cout << dez << " nota(s) de R$ 10,00" << endl;
		// Para 5 reais
		int cinc = 0;
		while ( x >= 5 ){
			x = x - 5;
			cinc ++;
		}
		cout << cinc << " nota(s) de R$ 5,00" << endl;
		// Para 2 reais
		int dois = 0;
		while ( x >= 2 ){
			x = x - 2;
			dois ++;
		}
		cout << dois << " nota(s) de R$ 2,00" << endl;
		// Para 1 real
		int um = 0;
		while ( x >= 1 ){
			x = x - 1;
			um ++;
		}
		cout << um << " nota(s) de R$ 1,00" << endl;
	}
    return 0;
}
