#include <stdio.h>

int main (){
	float x;
	scanf("%f", &x);
	x *= 100.0;
	printf("NOTAS:\n");

	// Para 100 reais
	float cem = 0;
	while ( x >= 10000 ){
		x = x - 10000;
		cem ++;
	}
	printf("%.f nota(s) de R$ 100.00\n", cem);

	// Para 50 reais
	float cinq = 0;
	while ( x >= 5000 ){
		x = x - 5000;
		cinq ++;
	}
	printf("%.f nota(s) de R$ 50.00\n", cinq);

	// Para 20 reais
	float vin = 0;
	while ( x >= 2000 ){
		x = x - 2000;
		vin ++;
	}
	printf("%.f nota(s) de R$ 20.00\n", vin);

	// Para 10 reais
	float dez = 0;
	while ( x >= 1000 ){
		x = x - 1000;
		dez ++;
	}
	printf("%.f nota(s) de R$ 10.00\n", dez);

	// Para 5 reais
	float cinc = 0;
	while ( x >= 500 ){
		x = x - 500;
		cinc ++;
	}
	printf("%.f nota(s) de R$ 5.00\n", cinc);

	// Para 2 reais
	float dois = 0;
	while ( x >= 200 ){
		x = x - 200;
		dois ++;
	}
	printf("%.f nota(s) de R$ 2.00\n", dois);
	printf("MOEDAS:\n");

	// Para 1 real
	float um = 0;
	while ( x >= 100 ){
		x = x - 100;
		um ++;
	}

	printf("%.f moeda(s) de R$ 1.00\n", um);

	// Para 0.5 centavos
	float meio = 0;
	while ( x >= 50 ){
		x = x - 50;
		meio ++;
	}
	printf("%.f moeda(s) de R$ 0.50\n", meio);

	// Para 0.25 centavos
	float umQuarto = 0;
	while ( x >= 25 ){
		x = x - 25;
		umQuarto ++;
	}
	printf("%.f moeda(s) de R$ 0.25\n", umQuarto);

	// Para 0.10 centavos
	float dezCent = 0;
	while ( x >= 10 ){
		x = x - 10;
		dezCent ++;
	}
	printf("%.f moeda(s) de R$ 0.10\n", dezCent);

	// Para 0.05 centavos
	float cincoCent = 0;
	while ( x >= 5 ){
		x = x -5;
		cincoCent ++;
	}
	printf("%.f moeda(s) de R$ 0.05\n", cincoCent);

	// Para 0.01 centavos
	float umCent = 0;
	while ( x >= 1 ){
		x = x - 1;
		umCent ++;
	}
	printf("%.f moeda(s) de R$ 0.01\n", umCent);

	return 0;
}
