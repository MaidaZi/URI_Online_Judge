#include <stdio.h>
#include <math.h>

int main(){
	float x1, y1, x2, y2;
	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
	float a = x2 - x1, b = y2 - y1, resp = sqrt(pow(a, 2) + pow(b, 2));
	printf("%0.4f\n", resp);

	return 0;
}
