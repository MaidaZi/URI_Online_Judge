#include <bits/stdc++.h>
using namespace std;

int num (string str);

int main() {
    int it;
    cin >> it;
    string str;
    for (int i = 0; i < it; i++) {
        cin >> str;
        cout << num(str) << endl;
    }
    return 0;
}

int num (string str) {
    if (str.size() == 3) {
        if ((str[0] == 'o' && str[1] == 'n') ||
            (str[1] == 'n' && str[2] == 'e') ||
            (str[0] == 'o' && str[2] == 'e'))
            return 1;
        else
            return 2;
    }
    else
        return 3;
    return 0;
}
