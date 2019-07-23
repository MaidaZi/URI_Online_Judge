#include <iostream>
using namespace std;

int main (){
    int a;
    cin >> a;

    if (a <= 800)
        cout << 1 << endl;
    else if (a <= 1400)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}
