#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    long long int vet[10000];
    int maior = 0, cont = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> vet[i];

        for (int i = 0; i < n-1; i++) {
            if (vet[i] == vet[i+1])
                cont++;
            else
                cont = 0;
            if (cont >= maior) {
                maior = cont;
        }
    }
    cout << maior+1 << endl;

    return 0;
}
