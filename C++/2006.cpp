#include <iostream>
using namespace std;

int main(){
	int cha, vet[5], cont = 0;
	cin >> cha;
	for ( int i = 0; i < 5 ; i++){
		cin >> vet[i];
		if(vet[i] == cha){
			cont ++;
		}
	}
	cout << cont << endl;

	return 0;
}
