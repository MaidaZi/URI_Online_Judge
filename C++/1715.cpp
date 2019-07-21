#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    cin >> n >> m;

    int vet[101][101];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> vet[i][j];

    int cont = 0, contint;

    for (int i = 0; i < n; i++) {
        contint = 0;
        for (int j = 0; j < m; j++) {
            if (vet[i][j] > 0)
                contint++;
            if (contint == m)
                cont++;
        }
    }

    cout << cont << endl;

    return 0;
}
