#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if ( a > b && b <= 96 && b >= 3)
        cout << "minguante" << endl;
    else if (b <= 96 && b >= 3)
        cout << "crescente" << endl;
    else if (b <= 100 && b >= 97)
        cout << "cheia" << endl;
    else
        cout << "nova" << endl;

    return 0;
}
