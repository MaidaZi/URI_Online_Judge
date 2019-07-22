#include <bits/stdc++.h>
using namespace std;

int main() {
    string word;
    int aux;
    while (cin >> word) {
        aux = 0;
        int tam = word.length();
        for (int i = 0; i < word.length(); i++) {
            cout << setw(i+1);
            for (int j = 0; j < tam; j++){
                if (j < tam -1)
                    cout << word[j] << " ";
                else
                    cout << word[j];
            }
            tam--;
            cout << endl;
        }
        cout << endl;
        aux++;
    }
    return 0;
}
