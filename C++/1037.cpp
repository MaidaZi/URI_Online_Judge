#include <iostream>

using namespace std;

int main (){

	double num;
	cin >> num;

	if (num >=0.00 && num <= 25.00)
		cout << "Intervalo [0,25]" << endl;

	else if (num > 25.00 && num <= 50.00)
		cout << "Intervalo (25,50]" << endl;

	else if (num > 50.00 && num <= 75.00)
		cout << "Intervalo (50,75]" << endl;

	else if (num >75.00 && num <= 100.00)
		cout << "Intervalo (75,100]" << endl;

	else
		cout << "Fora de intervalo" << endl;


return 0;
}
