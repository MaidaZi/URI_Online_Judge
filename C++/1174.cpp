#include <iostream>
#include <iomanip>
using namespace std;

int main( ){
    double vet[100];
    for (int i = 0 ; i < 100 ; i++){
        cin >> vet[i];
        if (vet[i] <= 10){
            cout << "A[" << i << "] = " << fixed << setprecision(1) << vet[i] << endl;
        }
    }
    return 0;
}
