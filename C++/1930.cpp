#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, soma = 0;
    cin >> a >> b >> c >> d;

    soma = a + b + c + d;

    soma -=3;

    if(soma <=0)
        soma = 0;
    cout << soma << endl;

    return 0;
}
