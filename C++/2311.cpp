#include <bits/stdc++.h>
using namespace std;;

int main() {
    int p;
    double dif;
    cin >> p;
    string nome;
    double pts[7];
    for (int i = 0; i < p; i++) {
        cin >> nome >> dif;
        for (int j = 0; j < 7; j++) {
            cin >> pts[j];
        }
        double menor = pts[0], maior = pts[0];
        for (int j = 1; j < 7; j++) {
            if(pts[j] > maior){
                maior = pts[j];
            }
            if(pts[j] < menor){
                menor = pts[j];
            }
        }
        double soma = 0;
        for (int j = 0; j < 7; j++) {
            soma += pts[j];
        }
        cout << nome << " " << fixed << setprecision(2) << (soma - (maior + menor)) * dif << endl;
    }
    return 0;
}
