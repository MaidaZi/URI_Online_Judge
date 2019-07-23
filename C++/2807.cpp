#include <iostream>
using namespace std;

int main(){
	long int n , v1 = 1, v2 = 1, v3;
	cin >> n;
    long int vet[n];
	for (int i = 0 ; i < n ; i++){
        vet[i] = v1;
		v3 = v1 + v2;
		v1 = v2;
		v2 = v3;
	}
    for (int i = n; i > 0 ; i--){
        cout << vet[i-1];
        if (i > 1 )
			cout << " ";
    }
	cout << endl;

	return 0;
}
