#include <bits/stdc++.h>
using namespace std;

int main() {
    double m[12][12];
    char c;
    cin >> c;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }
    if(c == 'S'){
        double sum = 0.0;
        for (int i = 11; i > 6; i--) {
            for (int j = 12 - i; j < i  ; j++) {
                sum += m[i][j];
            }
        }
        cout << fixed << setprecision(1) << sum << endl;
    }
    else{
        double med = 0.0;
        for (int i = 11; i > 6; i--) {
            for (int j = 12 - i; j < i  ; j++) {
                med += m[i][j];
            }
        }
        cout << fixed << setprecision(1) << med / 30.0 << endl;
    }

    return 0;
}
