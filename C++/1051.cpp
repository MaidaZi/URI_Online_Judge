#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	float salario, imposto;
	cin >> salario;

	if (salario <= 2000)
		cout <<"Isento"<< endl;

	else if (salario <= 3000){
		imposto = (salario - 2000.0) * 0.08;
		cout << "R$ " << fixed << setprecision(2) << imposto << endl;
	}
	else if (salario <= 4500){
		imposto = 1000 * 0.08;
		imposto += ((salario - 3000) * 0.18);
		cout << "R$ " << fixed << setprecision(2) << imposto << endl;
	}
	else {
		imposto = 1000 * 0.08;
		imposto = imposto + (1500 * 0.18);
		imposto = imposto + ((salario - 4500) * 0.28);
		cout << "R$ " << fixed << setprecision(2) << imposto << endl;
	}
    return 0;
}
