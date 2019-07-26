#include <bits/stdc++.h>
using namespace std;

int main () {
    int num;
    while (cin >> num) {
        vector<int> v;
        int insert;
        for (int i = 0; i < num; i++) {
            cin >> insert;
            v.push_back(insert);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < num; i++) {
            cout << setfill('0') << setw(4) << v[i] << endl;
        }
    }
    return 0;
}
