#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int N;
	cin >> N;
	for ( int i = 0 ; i < 1 ; i++ ){
		for ( int j = 1 ; j <= N ; j ++){
			cout << j << " " << pow(j,2) << " " << pow(j,3) << endl;
		}
	}

	return 0;
}
