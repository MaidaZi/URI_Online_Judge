#include <iostream>
#include <cstring>
#define MAX 10
using namespace std;

int main() {
    int q, d, p, resultado;
    while(cin >> q >> d >> p){

        resultado = (q * d * p)/(p-q);

        if( resultado == 1){
            cout << resultado << " pagina" << endl;
        }
        else{
            cout << resultado << " paginas" << endl;
        }
    }

    return 0;
}
