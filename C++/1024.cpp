#include <bits/stdc++.h>
using namespace std;

int main() {
    int it;
    cin >> it;
    string str;
    getchar();
    for (int i = 0; i < it; i++) {
        getline(cin,str);
        reverse(str.begin(), str.end());
        for (int j = 0; j < (int)str.size(); j++) {
            if ((str[j] > 64 && str[j] < 91) || (str[j] > 96 && str[j] < 123))
                str[j] += 3;
        }
        for (int j = str.size() / 2; j < (int)str.size(); j++) {
            str[j] -= 1;
        }
        cout << str << endl;
    }
    return 0;
}
