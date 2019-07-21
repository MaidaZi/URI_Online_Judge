#include <iostream>
using  namespace std;

int main(){
    int a, b, q, r;
    cin >> a >> b;

    r = (a % abs(b));

    if (r >= 0){
        q = (a - r)/(b);
        cout << q << " " << r << endl;
    }
    else {
        r += abs(b);
        q = (a - r)/(b);
        cout << q << " " << r << endl;
    }

    return 0;
}
