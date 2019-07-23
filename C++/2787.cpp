#include <iostream>
using namespace std;

int main(){
    int lin, col;

    cin >> lin >> col;

    if((lin % 2 == 0 && col % 2 != 0) || (lin % 2 != 0 && col % 2 == 0))
        cout << 0 << endl;
    else
        cout << 1 << endl;

    return 0;
}
