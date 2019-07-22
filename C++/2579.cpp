#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, l, c;
    cin >> a >> b >> l >> c;

    if (a % 2 == 0 && b % 2 == 0 ){
        if(l % 2 == 0 && c % 2 == 0)
            cout << "Direita" << endl;
        else if(l % 2 == 0 && c % 2 != 0)
            cout << "Esquerda" << endl;
        else if(l % 2 != 0 && c % 2 == 0)
            cout << "Direita" << endl;
        else if(l % 2 != 0 && c % 2 != 0)
            cout << "Esquerda" << endl;
    }
    else if(a % 2 == 0 && b % 2 != 0 ){
        if(l % 2 == 0 && c % 2 == 0)
            cout << "Direita" << endl;
        else if(l % 2 == 0 && c % 2 != 0)
            cout << "Esquerda" << endl;
        else if(l % 2 != 0 && c % 2 == 0)
            cout << "Esquerda" << endl;
        else if(l % 2 != 0 && c % 2 != 0)
            cout << "Direita" << endl;
    }
    else if(a % 2 != 0 && b % 2 == 0 ){
        if(l % 2 == 0 && c % 2 == 0)
            cout << "Direita" << endl;
        else if(l % 2 == 0 && c % 2 != 0)
            cout << "Esquerda" << endl;
        else if(l % 2 != 0 && c % 2 == 0)
            cout << "Direita" << endl;
        else if(l % 2 != 0 && c % 2 != 0)
            cout << "Esquerda" << endl;
    }
    else if(a % 2 != 0 && b % 2 != 0 ){
        if(l % 2 == 0 && c % 2 == 0)
            cout << "Direita" << endl;
        else if(l % 2 == 0 && c % 2 != 0)
            cout << "Esquerda" << endl;
        else if(l % 2 != 0 && c % 2 == 0)
            cout << "Esquerda" << endl;
        else if(l % 2 != 0 && c % 2 != 0)
            cout << "Direita" << endl;
    }
    return 0;
}
