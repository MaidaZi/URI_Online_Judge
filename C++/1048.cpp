#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main (){

	float salario, novoS=0, reajuste;
	string percentual;
	cin >> salario;

	if ( salario <= 400){
		novoS = salario + (salario * 0.15);
		reajuste = novoS - salario;
		percentual = "15 %";
	}
	else if ( salario <= 800){
		novoS = salario + (salario * 0.12);
		reajuste = novoS - salario;
		percentual = "12 %";
	}
	else if ( salario <= 1200){
		novoS = salario + (salario * 0.1);
		reajuste = novoS - salario;
		percentual = "10 %";
	}
	else if ( salario <= 2000){
		novoS = salario + (salario * 0.07);
		reajuste = novoS - salario;
		percentual = "7 %";
	}
	else {
		novoS = salario + (salario * 0.04);
		reajuste = novoS - salario;
		percentual = "4 %";
	}

	cout << "Novo salario: " << fixed << setprecision(2) << novoS << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
	cout << "Em percentual: " << percentual << endl;

    return 0;
}
