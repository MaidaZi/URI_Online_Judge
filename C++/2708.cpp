#include <bits/stdc++.h>
using namespace std;

int main (){
    int conts = 0, contv = 0, t, j = 0;
    string r;

    while (true) {
        cin >> r;
        cin >> t;
        if (r == "ABEND") {
            break;
        }
        else if (r == "SALIDA") {
            conts += t;
            j++;
        }
        else if (r == "VUELTA") {
            contv += t;
            j--;
        }
    }

    cout << abs(conts - contv) << endl;
    cout << j << endl;

    return 0;
}
