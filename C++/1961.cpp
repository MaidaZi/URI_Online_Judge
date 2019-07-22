#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int pulo, canos;
	cin >> pulo >> canos;
	int *distacia = new int [canos];
	//Preenchendo a altura dos canos
	for (int i = 0 ; i < canos ; i++)
		cin >> distacia[i];
	//Conferindo se é possovel ganhar ou nao
	bool caiu = false;
	for (int i = 0 ; i < canos - 1 ; i++){
		if (abs(distacia[i] - distacia[i+1]) <= pulo )
			caiu = false;
		else{
			caiu = true;
			break;
		}
	}
	if (caiu == true)
		cout << "GAME OVER" << endl;
	else
		cout << "YOU WIN" << endl;

	delete [] distacia;

	return 0;
}
