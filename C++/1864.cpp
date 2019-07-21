#include <iostream>
using namespace std;

int main(){
	char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

	int n, i = 0;
	cin >> n;

	while(i < n){
		cout << frase[i];	
		i++;
	}
	cout << endl;

	return 0;
}
