#include <bits/stdc++.h>
using namespace std;

int main (){
    unsigned long long int vet[17], a;

    while (cin >> a){
        vet[0]= 0, vet[1] = 1;
        for (int i = 2; i < 17; i++) {
            if (i % 2 != 1)
                vet[i] = vet[i-1] + vet[i - 2];
            else
                vet[i] = vet[i-1] * vet[i-2];
        }
        cout << vet[a-1] << endl;
    }
    return 0;
}
