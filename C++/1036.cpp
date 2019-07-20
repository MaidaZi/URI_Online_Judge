#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	double A, B, C, delta, r1, r2;
	cin >> A >> B >> C;

	delta = (pow(B,2)) - (4*A*C);

	if (delta >= 0 && A != 0.0){
		r1 = (-B + sqrt(delta))/(2*A);
		r2 = (-B - sqrt(delta))/(2*A);
		cout << "R1 = " << fixed << setprecision (5) << r1 << endl;
		cout << "R2 = " << fixed << setprecision (5) << r2 << endl;
	}
	else
		cout << "Impossivel calcular" << endl;

    return 0;
}
