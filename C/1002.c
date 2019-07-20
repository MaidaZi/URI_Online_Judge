#include <stdio.h>

int main(){
	double area, raio, n = 3.14159;
	scanf("%lf", &raio);
	area = n*(raio*raio);
	printf("A=%0.4f\n",area);

	return 0;
}
