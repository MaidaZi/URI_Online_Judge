#include <iostream>
using namespace std;

int main(){
    int vet[20];
    for (int i = 19 ; 0 <= i ; i--){
        cin >> vet[i];
    }
    for (int i = 0 ; i < 20 ; i++){
        cout <<"N[" << i <<"] = " << vet[i] << endl;
    }

    return 0;
}
