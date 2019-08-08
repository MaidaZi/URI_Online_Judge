#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtd;
    string language, phase, name;
    map<string, string> myMap;
    map<string, string> :: iterator it;
    cin >> qtd;
    for (int i = 0; i < qtd; i++) {
        cin >> language;
        getchar();
        getline(cin,phase);
        myMap[language] = phase;
    }
    cin >> qtd;
    for (int i = 0; i < qtd; i++) {
        getchar();
        getline(cin,name);
        cin >> language;
        for (it = myMap.begin() ; it != myMap.end(); it++) {
            if (language == it->first) {
                cout << name << endl << it->second << endl << endl;
                break;
            }
        }
    }
    return 0;
}
