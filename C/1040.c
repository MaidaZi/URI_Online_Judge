#include <stdio.h>

int main (){

	double n1, n2, n3, n4, media, notaF = 0, exame;
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

	media = (n1*2 + n2*3 + n3*4 + n4)/10;
	printf("Media: %0.1lf\n", media);

	if(media >= 7.0){
		printf("Aluno aprovado.\n");
	}
	else if(media < 5.0){
		printf("Aluno reprovado.\n");
	}
	else if(media < 7){
		printf("Aluno em exame.\n");
		scanf("%lf", &exame);
		printf("Nota do exame: %0.1lf\n", exame);

		notaF = (exame + media) / 2;

		if(notaF >= 5.0){
			printf("Aluno aprovado.\n");
			printf("Media final: %0.1lf\n", notaF);
		}
		else {
			printf("Aluno reprovado.\n");
			printf("Media final: %0.1lf\n", notaF);
		}
	}
	return 0;
}
