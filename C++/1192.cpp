#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int it;
    cin >> it;
    string phase;
    for (int i = 0; i < it; i++) {
        cin >> phase;
        if (phase[1] > 64 && phase[1] < 91) {
            if (phase[0] == phase[2])
                cout << (phase[2]-48) * (phase[0]-48) << endl;
            else
                cout << (phase[2]-48) - (phase[0]-48) << endl;
        }
        else {
            if (phase[0] == phase[2])
                cout << (phase[2]-48) * (phase[0]-48) << endl;
            else
                cout << (phase[2]-48) + (phase[0]-48) << endl;
        }
    }
    return 0;
}
