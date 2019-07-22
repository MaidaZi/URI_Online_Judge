#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, size;
    string word;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> word;
        size = word.length();
        cout << fixed << setprecision(2) << 0.01*size << endl;
    }
    return 0;
}
