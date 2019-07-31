#include <bits/stdc++.h>
using namespace std;

int main () {
    int it;
    string play1, play2;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> play1 >> play2;
        if (play1 == play2)
            cout << "empate" << endl;
        else if (play1 == "tesoura" && play2 == "papel")
            cout << "rajesh" << endl;
        else if (play1 == "papel" && play2 == "pedra")
            cout << "rajesh" << endl;
        else if (play1 == "pedra" && play2 == "lagarto")
            cout << "rajesh" << endl;
        else if (play1 == "lagarto" && play2 == "spock")
            cout << "rajesh" << endl;
        else if (play1 == "spock" && play2 == "tesoura")
            cout << "rajesh" << endl;
        else if (play1 == "tesoura" && play2 == "lagarto")
            cout << "rajesh" << endl;
        else if (play1 == "lagarto" && play2 == "papel")
            cout << "rajesh" << endl;
        else if (play1 == "papel" && play2 == "spock")
            cout << "rajesh" << endl;
        else if (play1 == "spock" && play2 == "pedra")
            cout << "rajesh" << endl;
        else if (play1 == "pedra" && play2 == "tesoura")
            cout << "rajesh" << endl;
        else{
            cout << "sheldon" << endl;
        }
    }
    return 0;
}
