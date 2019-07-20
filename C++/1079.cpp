#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int N;
	cin >> N;

	while( N >= 1 ){
		double v1 , v2 , v3;
		cin >> v1 >> v2 >> v3;

		double media = ( v1*2.0 + v2*3.0 + v3*5.0 ) / 10.0;
		cout << fixed << setprecision(1) << media << endl;
		N--;
	}
    return 0;
}
