#include <iostream>
#include <iomanip>
using namespace std;

int main (){

	float a, b, c;
	cin >> a >> b >> c;

	/*condicao de existencia  */
	float perimetro, area;

	if (a + b > c && a + c > b && b + c > a) {
		perimetro = a + b + c;
		cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
	}
	else{
		area = ((a + b) * c )/2;
		cout << "Area = " << fixed << setprecision(1) << area << endl;
	}

    return 0;
}
