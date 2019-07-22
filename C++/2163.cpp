#include <bits/stdc++.h>
using namespace std;

int main (){
    int matriz[1000][1000];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] == 42 && i > 0 && j > 0 && i < n-1 && j < m-1) {
                if (matriz[i][j+1] == 7 && matriz[i][j-1] == 7 && matriz[i-1][j-1] == 7 && matriz[i-1][j] == 7 && matriz[i-1][j+1] == 7 && matriz[i+1][j-1] == 7 && matriz[i+1][j] == 7 && matriz[i+1][j+1] == 7) {
                    cout << i+1 << " " << j+1 << endl;
                    return 0;
                }
            }
        }
    }

    cout << 0 << " " << 0 << endl;

    return 0;
}
