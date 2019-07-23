#include <iostream>
using namespace std;

int main (){
	int c, valor;
	cin >> c;
	for (int i = 0; i < c ; i ++ ){
		cin >> valor;
		if (valor <= 8000)
			cout << "Inseto!" << endl;

		else
			cout << "Mais de 8000!" << endl;
	}

    return 0 ;
}
