#include <bits/stdc++.h>
using namespace std;;

int main() {
    int p;
    cin >> p;
    string nome;

    double s, b, a;
    double totalSaque = 0, totalBloqueio = 0, totalAtaque = 0;
    double acertoSaque = 0, acertoBloqueio = 0, acertoAtaque = 0;
    for (int i = 0; i < p; i++) {
        cin >> nome;
        cin >> s >> b >> a;
        totalSaque += s;
        totalBloqueio += b;
        totalAtaque += a;
        cin >> s >> b >> a;
        acertoSaque += s;
        acertoBloqueio += b;
        acertoAtaque += a;
    }

    cout << "Pontos de Saque: " << fixed << setprecision(2) << acertoSaque*100.0 / totalSaque << " %." << endl;
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << acertoBloqueio*100.0 / totalBloqueio << " %." << endl;
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << acertoAtaque*100.0 / totalAtaque << " %." << endl;

    return 0;
}
