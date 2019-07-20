#include <iostream>
using namespace std;

int main () {
	int N;
	cin >> N;

	for (int i = 1; i <= 1 ; i++){
		for (int j = 1; j <= N*4 ; j++){
			if (j % 4 == 0)
				cout << "PUM" << endl;
			else
				cout << j << " ";
		}
	}

    return 0;
}
