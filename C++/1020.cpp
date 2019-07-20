#include <iostream>
using namespace std;

int main (){
	int idade, ano = 0, mes = 0, dia = 0;
	cin >> idade;

	while (idade > 0){
		if (idade >= 365){
			idade -= 365;
			ano ++;
		}
		if (idade >= 30){
			idade -= 30;
			mes ++;
		}
		if (idade > 0 ){
			idade -= 1;
			dia ++;
		}

	}
	cout << ano << " ano(s)" << endl;
	cout << mes << " mes(es)" << endl;
	cout << dia << " dia(s)" << endl;

	return 0;
}
