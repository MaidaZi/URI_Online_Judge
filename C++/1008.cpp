#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int a, b;
	double c, salario;

	cin >> a >> b >> c;
	salario = ( b * c ) ;
	cout << "NUMBER = " << a <<  endl;
	cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

	return 0;

}
