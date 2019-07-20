#include <stdio.h>

int main (){
	int num;
	scanf("%d", &num);

	int hora = 0, minuto = 0,  segundo = 0;

	while( num > 0){
		if( num >= 3600){
			hora ++;
			num -= 3600;
		}
		else if( num >= 60){
			minuto ++;
			num -= 60;
		}
		else{
			segundo ++;
			num -= 1;
		}
	}
	printf("%d:%d:%d\n", hora, minuto, segundo);

	return 0;
}
