#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	int n , v1 = 0, v2 = 1, v3;
	cin >> n;

	for (int i = 0 ; i < n ; i++){
		cout << v1;
		v3 = v1 + v2;
		v1 = v2;
		v2 = v3;
		if (i < n-1 )
			cout << " ";
	}
	cout << endl;

	return 0;
}
