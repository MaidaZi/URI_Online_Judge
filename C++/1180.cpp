#include <iostream>
using namespace std;

int main (){
	int n, menor = 1000, pos,num;
	cin >> n;

	for (int i = 0 ; i < n ; i++){
		cin >> num;
		if (num < menor){
			menor = num;
			pos = i;
		}
	}
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;

	return 0;
}
