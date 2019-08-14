#include <bist/stdc++.h>
using namespace std;

int main () {
    int it;
    cin >> it;
    string str;
    for (int i = 0; i < it; i++) {
        getline(cin, str);
        for (int i = 0; i < str.size(); i++) {
            if (str[0] != 32)
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
