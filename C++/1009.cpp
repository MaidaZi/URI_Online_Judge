#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char nome[100];
	double salario, vendas, total;

	cin >> nome >> salario >> vendas;
	total = (0.15 * vendas) + salario;
	cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

	return 0;
}
