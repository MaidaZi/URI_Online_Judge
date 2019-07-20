#include <stdio.h>

int main(){
	int num, hora;
	double salario;

	scanf("%d %d %lf", &num, &hora, &salario);
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %0.2lf\n", hora*salario);

	return 0;
}
