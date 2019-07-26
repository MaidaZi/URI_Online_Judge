#include <bits/stdc++.h>
using namespace std;

int main () {
    int it;
    string first, second;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> first >> second;
        if(first.size() >= second.size()){
            string aux = first.substr(first.size() - second.size(), first.size());
            if(aux == second)
                cout << "encaixa" << endl;
            else
                cout << "nao encaixa" << endl;
        }
        else
            cout << "nao encaixa" << endl;
    }
    return 0;
}
