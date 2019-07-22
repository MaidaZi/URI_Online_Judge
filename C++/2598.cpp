#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int intera;
	cin >> intera;
	for (int i = 0 ; i < intera ; i++){
		double n, m;
		cin >> n >> m;
		cout << ceil(n / m) << endl;
	}

	return 0;
}
