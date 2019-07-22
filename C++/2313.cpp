#include <bits/stdc++.h>
using namespace std;;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(abs(b-c) < a && a < (b+c) || abs(a-c) < b && b < (a+c) || abs(a-b) < c && c < (a+b)){
        if( a == b && b == c){ // Equilatero
            cout << "Valido-Equilatero" << endl << "Retangulo: ";
            if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b){
                cout << "S" << endl;
            }
            else{
                cout << "N" << endl;
            }
        }
        else if(a != b && b != c && c != a){
            cout << "Valido-Escaleno" << endl << "Retangulo: ";
            if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b){
                cout << "S" << endl;
            }
            else{
                cout << "N" << endl;
            }
        }
        else if(a == b || b == c || c == a){
            cout << "Valido-Isoceles" << endl << "Retangulo: ";
            if(a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b){
                cout << "S" << endl;
            }
            else{
                cout << "N" << endl;
            }
        }
    }
    else{
        cout << "Invalido" << endl;
    }

    return 0;
}
