#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    vector<string> v;

    while (cin >> word) {
        v.push_back(word);
    }

    sort(v.begin(), v.end());

    for (int i = 0 ; i < (int)v.size() ; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
