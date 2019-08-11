#include <bits/stdc++.h>
using namespace std;

int main() {
    int it;
    string str1, str2;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> str1 >> str2;
        int j = 0 , k = 0;
        while (j < (int)str1.size() || k < (int)str2.size()) {
            if (j < (int)str1.size()){
                cout << str1[j];
                j++;
            }
            if (k < (int)str2.size()){
                cout << str2[k];
                k++;
            }
        }
        cout << endl;
    }
    return 0;
}
