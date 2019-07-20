#include <stdio.h>

int main(){
	char nome[50];
	double salario, venda;
	scanf("%s %lf %lf", nome, &salario, &venda);
	printf("TOTAL = R$ %0.2lf\n", salario + (venda*0.15));

	return 0;
}
