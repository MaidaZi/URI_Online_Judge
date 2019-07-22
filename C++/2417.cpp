#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int r1, r2;

    r1 = abs(a - c);
    r2 = abs(b - d);

    cout << r1+r2 << endl;

    return 0;
}
