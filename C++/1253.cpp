#include <bits/stdc++.h>
using namespace std;

int main () {
    string phase;
    int it, val;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> phase;
        cin >> val;
        for (int j = 0; j < (int)phase.size(); j++) {
            if (phase[j] - val < 65)
                cout << (char)(91 - (65 - (phase[j] - val)));
            else
                cout << (char)(phase[j] - val);
        }
        cout << endl;
    }
    return 0;
}
