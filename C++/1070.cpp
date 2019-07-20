#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int num, cont = 1;
	cin >> num;

	while (cont <= 6){
		if (num % 2 != 0){
			cont ++;
			cout << num << endl;
			num ++;
		}
		else
			num ++;
	}
    return 0;
}
