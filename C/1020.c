#include <stdio.h>

int main (){

	int num;
	scanf("%d", &num);

	int ano = 0, mes = 0, dia = 0;

	while( num > 0){
		if( num >= 365){
			ano ++;
			num -= 365;
		}
		else if( num >= 30){
			mes ++;
			num -= 30;
		}
		else{
			dia ++;
			num -= 1;
		}
	}

	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);

	return 0;
}
