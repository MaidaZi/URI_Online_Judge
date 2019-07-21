#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char t;
    char r;

    while(true){
        cin >> n;
        if (n == 0) {
            return 0;
        }
        int cont = 0;
        for (int i = 0; i < n; i++) {
            cin >> t;
            if (t == 'D') {
                cont++;
            }
            else if (t == 'E') {
                cont--;
            }
            if (cont == 1) {
                r = 'L';
            }
            else if (cont == 2) {
                r = 'S';
            }
            else if (cont == 3) {
                r = 'O';
            }
            else if (cont == 4) {
                r = 'N';
            }
            if (cont == 4) {
                cont = 0;
            }
            if (cont == 0) {
                r = 'N';
            }
            if (cont == -1) {
                r = 'O';
            }
            else if (cont == -2) {
                r = 'S';
            }
            else if (cont == -3) {
                r = 'L';
            }
            else if (cont == -4) {
                r = 'N';
            }
            if (cont == -4) {
                cont = 0;
            }
        }
        cout << r << endl;
    }

    return 0;
}
