#include <iostream>
using namespace std;

int main (){
	float x;
	cin >> x;
	x = x * 100;

	cout << "NOTAS:" << endl;

	// Para 100 reais
	float cem = 0;
	while ( x >= 10000 ){
		x = x - 10000;
		cem ++;
	}
	cout << cem << " nota(s) de R$ 100.00" << endl;

	// Para 50 reais
	float cinq = 0;
	while ( x >= 5000 ){
		x = x - 5000;
		cinq ++;
	}
	cout << cinq << " nota(s) de R$ 50.00" << endl;

	// Para 20 reais
	float vin = 0;
	while ( x >= 2000 ){
		x = x - 2000;
		vin ++;
	}
	cout << vin << " nota(s) de R$ 20.00" << endl;

	// Para 10 reais
	float dez = 0;
	while ( x >= 1000 ){
		x = x - 1000;
		dez ++;
	}
	cout << dez << " nota(s) de R$ 10.00" << endl;

	// Para 5 reais
	float cinc = 0;
	while ( x >= 500 ){
		x = x - 500;
		cinc ++;
	}
	cout << cinc << " nota(s) de R$ 5.00" << endl;

	// Para 2 reais
	float dois = 0;
	while ( x >= 200 ){
		x = x - 200;
		dois ++;
	}
	cout << dois << " nota(s) de R$ 2.00" << endl;

	cout << "MOEDAS:" << endl;

	// Para 1 real
	float um = 0;
	while ( x >= 100 ){
		x = x - 100;
		um ++;
	}
	cout << um << " moeda(s) de R$ 1.00" << endl;

	// Para 0.5 centavos
	float meio = 0;
	while ( x >= 50 ){
		x = x - 50;
		meio ++;
	}
	cout << meio << " moeda(s) de R$ 0.50" << endl;

	// Para 0.25 centavos
	float umQuarto = 0;
	while ( x >= 25 ){
		x = x - 25;
		umQuarto ++;
	}
	cout << umQuarto << " moeda(s) de R$ 0.25" << endl;

	// Para 0.10 centavos
	float dezCent = 0;
	while ( x >= 10 ){
		x = x - 10;
		dezCent ++;
	}
	cout << dezCent << " moeda(s) de R$ 0.10" << endl;

	// Para 0.05 centavos
	float cincoCent = 0;
	while ( x >= 5 ){
		x = x -5;
		cincoCent ++;
	}
	cout << cincoCent  << " moeda(s) de R$ 0.05" << endl;

	// Para 0.01 centavos
	float umCent = 0;
	while ( x >= 1 ){
		x = x - 1;
		umCent ++;
	}
	cout << umCent << " moeda(s) de R$ 0.01" << endl;

	return 0;
}
