#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    while (cin >> num1 >> num2) {
        if(num1 == 0 && num2 == 0)
            break;
        else{
            string str = to_string(num1 + num2);
            for (int i = 0; i < (int)str.size(); i++) {
                if (str[i] != 48)
                    cout << str[i];
            }
            cout << endl;
        }
    }
    return 0;
}
