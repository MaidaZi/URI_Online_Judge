#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int g1, g2, cont = 0, escolha = 1, inter = 0 , gre = 0, emp = 0;

	while (escolha == 1){
		cin >> g1 >> g2;

		if (g1 > g2){
			inter ++;
			cont ++;
		}
		else if (g2 > g1){
			gre ++;
			cont ++;
		}
		else{
			emp ++;
			cont ++;
		}
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> escolha;


	}
	cout << cont << " grenais"<< endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gre << endl;
	cout << "Empates:" << emp << endl;

	if (gre == inter)
		cout <<"Nao houve vencedor" << endl;
	else if (gre > inter)
		cout <<"Gremio venceu mais" << endl;
	else
		cout <<"Inter venceu mais" << endl;

    return 0;
}
