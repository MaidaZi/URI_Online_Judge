#include <bits/stdc++.h>
using namespace std;

int main (){
    int a, b, vet[3];

    for (int i = 0; i < 3; i++) {
        cin >> vet[i];
    }
    cin >> a >> b;
    if ((vet[1] <= a && vet[0] <= b) || (vet[1] <= a && vet[2] <= b) ||
        (vet[2] <= a && vet[0] <= b) || (vet[2] <= a && vet[1] <= b) ||
        (vet[0] <= a && vet[1] <= b) || (vet[0] <= a && vet[2] <= b))
        cout << "S" << endl;
    else
    cout << "N" << endl;

    return 0;
}
