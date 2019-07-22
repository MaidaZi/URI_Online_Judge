#include <bits/stdc++.h>
using namespace std;;

int main() {
    int iterator;
    int r, g, b;
    cin >> iterator;
    string name;
    for (int i = 0; i < iterator; i++) {
        cin >> name >> r >> g >> b;
        cout << "Caso #" << i+1 << ": ";
        if (name == "eye")
            cout << (30*r + 59*g + 11*b)/100 << endl;
        else if (name == "mean")
            cout << fixed << setprecision(0) << (r + g + b)/3 << endl;
        else if (name == "max"){
            if( r >= g && r >= b)
                cout << r << endl;
            else if( g >= r && g >= b)
                cout << g << endl;
            else
                cout << b << endl;
        }
        else if (name == "min"){
            if( r <= g && r <= b)
                cout << r << endl;
            else if( g <= r && g <= b)
                cout << g << endl;
            else
                cout << b << endl;
        }
    }

    return 0;
}
