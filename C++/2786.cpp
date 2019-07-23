#include <bits/stdc++.h>
using namespace std;

int main (){
    int c, l;

    cin >> l >> c;

    cout << (c * l) + ((c - 1) * (l - 1)) << endl;
    cout << 2 * (c - 1) + 2 * (l - 1) << endl;

    return 0;
}
