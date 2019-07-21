#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int contaDig (int b);
int ultimoDigito(int a, int b);

int main(){
	int intera;
	cin >> intera;
	for ( int i = 0; i < intera ; i++){
		int a, b;
		cin >> a >> b;

		if(ultimoDigito(a,b) == 0){
			cout << "encaixa" << endl;
		}
		else{
			cout << "nao encaixa" << endl;
		}


	}
	return 0;
}

int contaDig (int num){
	int contador = 0;
	while(num > 0){
		num = num/10;
		contador++;
	}
	return contador;
}

int ultimoDigito(int a, int b){
	int dez = contaDig(b);
	if(a % (int)(pow(10,dez)) == b){
		return 0;
	}
	else{
		return 1;
	}
}
