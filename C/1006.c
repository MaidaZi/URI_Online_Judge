#include <stdio.h>

int main(){
	double a, b, c, media;
	scanf("%lf %lf %lf", &a, &b, &c);
	media = (a*2.0 + b*3.0 + c*5.0)/10.0;
	printf("MEDIA = %0.1lf\n",media);

	return 0;
}
