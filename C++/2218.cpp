#include <bits/stdc++.h>
using namespace std;

int main() {
    int it, num;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> num;
        cout << (num*(num+1))/2 + 1 << endl;
    }
    return 0;
}
