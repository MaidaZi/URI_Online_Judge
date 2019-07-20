#include <bits/stdc++.h>
using namespace std;

int main (){
    int qtd, a, b;
    cin >> qtd;

    for(int i = 0 ; i < qtd ; i++){
        cin >> a >> b;
        cout << __gcd(a,b) << endl;
    }

    return 0;
}
