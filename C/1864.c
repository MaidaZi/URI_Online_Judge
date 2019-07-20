#include <stdio.h>

int main(){

	char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

	int n, i = 0;
	scanf("%d", &n);

	while(i < n){
		printf("%c", frase[i]);
		i++;
	}
	printf("\n");


	return 0;
}
