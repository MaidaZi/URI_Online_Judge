#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double a,b,c, tri, cir, tra, qua, ret;
	cin >> a >> b >> c;
	tri = (a * c)/2.000;
	cir = 3.14159* pow(c,2);
	tra = (c*(a+b))/2.0;
	qua = pow(b,2);
	ret = a*b;

	cout <<"TRIANGULO: " << fixed << setprecision(3) << tri  << endl;
	cout <<"CIRCULO: " << fixed << setprecision(3) << cir  << endl;
	cout <<"TRAPEZIO: " << fixed << setprecision(3) << tra << endl;
	cout <<"QUADRADO: " << fixed << setprecision(3) << qua << endl;
	cout <<"RETANGULO: "  << fixed << setprecision(3)<< ret << endl;

    return 0;
}
