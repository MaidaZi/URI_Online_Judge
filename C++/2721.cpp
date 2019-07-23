#include <bits/stdc++.h>
using namespace std;

int main() {
    int vet[9];
    for (int i = 0; i < 9; i++) {
        cin >> vet[i];
    }
    int sum = 0;
    for (int i = 0; i < 9; i++) {
        sum += vet[i];
    }
    int rest = sum % 9;
    if (rest == 1) {
        cout << "Dasher" << endl;
    }
    else if (rest == 2) {
        cout << "Dancer" << endl;
    }
    else if (rest == 3) {
        cout << "Prancer" << endl;
    }
    else if (rest == 4) {
        cout << "Vixen" << endl;
    }
    else if (rest == 5) {
        cout << "Comet" << endl;
    }
    else if (rest == 6) {
        cout << "Cupid" << endl;
    }
    else if (rest == 7) {
        cout << "Donner" << endl;
    }
    else if (rest == 8) {
        cout << "Blitzen" << endl;
    }
    else if (rest == 9 || rest == 0) {
        cout << "Rudolph" << endl;
    }

    return 0;
}
