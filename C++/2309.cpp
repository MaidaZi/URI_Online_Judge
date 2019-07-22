#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, conta = 0, contb = 0, conta1 = 0, contb1 = 0;
    int vet[6];

    cin >> n;

    while(n--){
        for (int i = 0; i < 6; i++)
            cin >> vet[i];

        for (int i = 0; i < 6; i++) {
            if (vet[i] == 12)
                vet[i] -= 4;
            else if (vet[i] == 11)
                vet[i] -= 2;
            else if (vet[i] == 13)
                vet[i] -= 3;
            else if (vet[i] == 1)
                vet[i] += 10;
            else if (vet[i] == 2)
                vet[i] += 10;
            else if (vet[i] == 3)
                vet[i] += 10;
        }

        for (int i = 0; i < 3; i++) {
            if (vet[i] >= vet[i+3])
                conta++;
            else
                contb++;
        }

        if (conta >= contb) {
            conta1++;
            conta = 0;
            contb = 0;
        }
        else if (conta <= contb){
            contb1++;
            conta = 0;
            contb = 0;
        }
    }
    cout << conta1 << " " << contb1 << endl;

    return 0;
}
