#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int amarilza;
	cin >> amarilza;

	for (int i = 1; i <= amarilza ; i++){
		if (amarilza % i == 0)
			cout << i << endl;
	}

	return 0;
}
