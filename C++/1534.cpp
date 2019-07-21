#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    while (cin >> num ) {
        int m[num][num];

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                if ((num - 1 - j) == i) {
                    m[i][j] = 2;
                }
                else if (i == j) {
                    m[i][j] = 1;
                }
                else {
                    m[i][j] = 3;
                }
            }
        }

        for (int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                cout << m[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
