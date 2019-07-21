#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double s = 0;
	for (double i = 1, j = 0 ; i <= 39 ; i+=2 , j++){
		s += i/pow(2,j);
	}

	cout << fixed << setprecision(2) << s << endl;

	return 0;
}
