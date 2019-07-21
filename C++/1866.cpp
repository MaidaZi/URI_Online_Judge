#include <iostream>
using namespace std;

int main() {
    int inte, soma = 0;
    cin >> inte;

    for(int j = 0 ; j < inte ; j++){
        int valor = 0, soma = 0;
        cin >> valor ;
        for(int i = 0 ; i < valor ; i++){

            if (i % 2 == 0){
                soma +=1;
            }
            else {
                soma-=1;
            }
        }
        cout << soma << endl;
    }
    return 0;
}
