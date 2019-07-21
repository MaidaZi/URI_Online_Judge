#include <iostream>
using namespace std;

int main( ){
    int valor, vet[10];
    cin >> valor;
    for (int i = 0 ; i < 10 ; i++){
        vet[i] = valor;
        cout << "N[" << i << "] = " << vet[i] << endl;
        valor *= 2;
    }
    return 0;
}
