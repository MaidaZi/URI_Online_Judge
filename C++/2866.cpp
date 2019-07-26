#include <bits/stdc++.h>
using namespace std;

int main () {
    string phase;
    int it;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> phase;
        for (int i = (int)phase.size() - 1; i >= 0 ; i--) {
            if(phase[i] > 96 && phase[i] < 123) {
                cout << phase[i];
            }
        }
        cout << endl;
    }
    return 0;
}
