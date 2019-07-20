#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int n = 1;

	while (n != 0){
		cin >> n;
		for ( int i = 1 ; i <= n ; i++){
			cout << i;
			if (i < n)
				cout << " ";
		}
		if (n > 0)
		cout << endl;

	}

    return 0;
}
