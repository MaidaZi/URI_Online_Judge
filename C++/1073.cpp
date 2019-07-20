#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	long long int num1;
	cin >> num1;

	for (int i = 1 ; i <= num1; i++){
		if ( i % 2 == 00)
			cout << i << "^2 = " << fixed << setprecision (0) << pow(i,2) << endl;
	}
    return 0;
}
