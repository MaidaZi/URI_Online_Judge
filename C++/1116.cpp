#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int N;
	float x, y, divisao;

	cin >> N;

	for (int i = 0 ; i < N ; i++){
		cin >> x >> y;

		if ( y == 0 )
			cout << "divisao impossivel" << endl;

		else{
			divisao = (x / y);
			cout << fixed << setprecision(1) << divisao << endl;
		}
	}

    return 0;
}
