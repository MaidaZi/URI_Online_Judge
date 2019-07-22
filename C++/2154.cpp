#include <iostream>
#include <cmath>
using namespace std;

void derivada (int n, int m);

int main (){
    int qtd;
    while(cin >> qtd){
        for (int i = 0 ; i < qtd ; i++){
            int base = 0, expo = 0;
            char x, s ;
            cin >> base >> x >> expo;

            if (i != qtd - 1 ){
                cin >> s;
            }

            derivada(base,expo);

            if ( i < qtd - 1){
                cout << " + ";
            }
        }
        cout << endl;
    }

    return 0;
}

void derivada (int n, int m){
    if (m == 2)
        cout << (n * m) << "x";
    else if (m > 2)
        cout << (n * m) << "x" << m - 1;
    else
        cout << (n * m);
}
