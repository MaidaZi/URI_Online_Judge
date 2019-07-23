#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    int *v = new int[n];

    v[0] = 0;

    for (int i = 1; i < n+1; i++) {
        cin >> v[i];
    }

    int cont = 0;
    for (int i = 0; i < n; i++) {
        if (v[i+1] - v[i] > 8) {
            cout << "N" << endl;
            return 0;
        }
        else
            cont++;
    }
    if (cont != 0) {
        cout << "S" << endl;
    }

    return 0;
}
