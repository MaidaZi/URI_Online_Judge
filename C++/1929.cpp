#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b > c && a + c > b && b + c > a)
        cout << "S" << endl;
    else if (b + c > d && b + d > c && c + d > b)
        cout << "S" << endl;
    else if (c + d > a && c + a > d && d + a > c)
        cout << "S" << endl;
    else if (d + a > b && d + b > a && a + b > d)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
