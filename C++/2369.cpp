#include <bits/stdc++.h>
using namespace std;

int main (){
    int a;
    cin >> a;

    int ab = 7;

    if (a < 11)
        cout << ab << endl;
    else if (a > 10 && a < 31)
        cout << a - 10 + ab << endl;
    else if (a > 30 && a < 101)
        cout << ((a - 30)*2) + ab + 20 << endl;
    else
        cout << ((a - 100)*5) + ab + 20 + 140 << endl;

    return 0;
}
