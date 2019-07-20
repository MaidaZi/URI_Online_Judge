#include <stdio.h>

int main(){
	int cod, num;
	float valor, soma = 0;
	int i;
	for (i = 0; i < 2 ; i++){
		scanf("%d %d %f", &cod, &num, &valor);
		soma += num * valor;
	}
	printf("VALOR A PAGAR: R$ %0.2lf\n", soma);

	return 0;
}
