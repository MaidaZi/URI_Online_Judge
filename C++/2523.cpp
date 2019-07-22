#include <bits/stdc++.h>
using namespace std;;

int main() {
    string phase;
    while (cin >> phase) {
        int size;
        cin >> size;
        int v[size];
        for (int i = 0; i < size; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < size; i++) {
            cout << phase[v[i]-1];
        }
        cout << endl;
    }

    return 0;
}
