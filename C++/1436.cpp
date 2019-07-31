#include <bits/stdc++.h>
using namespace std;

int main() {
    int it, it2, num;
    vector<int> v;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> it2;
        for (int j = 0; j < it2; j++) {
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        cout << "Case " << i+1 << ": " << v[(v.size()/2)] << endl;
        v.clear();
    }
    return 0;
}
