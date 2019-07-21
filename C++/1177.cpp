#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int valor, j = 0,  vet[1000];
    cin >> valor;

    for ( int i = 0; i < 1000; i ++){
        if(j >= valor ){
            j = 0;
        }
        vet[i] = j;
        cout << "N[" << i << "] = " << vet[i] << endl;
        j += 1;
    }

	return 0;
}
