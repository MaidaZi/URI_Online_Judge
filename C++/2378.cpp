#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, c;
    cin >> n >> c;

    int v[n][2];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++)
            cin >> v[i][j];

    int p = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++) {
            if (j % 2 == 0) {
                p -= v[i][j];
            }
            else
                p += v[i][j];
            if (p > c) {
                cout << "S" << endl;
                return 0;
            }
        }
    cout << "N" << endl;

    return 0;
}
