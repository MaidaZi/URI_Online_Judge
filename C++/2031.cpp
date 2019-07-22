#include <iostream>
using namespace std;

int main (){
    int intera;
    cin >> intera;

    for(int i = 0; i < intera; i++){
        string escolha1, escolha2;
        cin >> escolha1 >> escolha2;
        if (escolha1 == "ataque" && escolha2 == "pedra")
            cout << "Jogador 1 venceu" << endl;
        else if (escolha1 == "pedra" && escolha2 == "papel")
            cout << "Jogador 1 venceu" << endl;
        else if (escolha1 == "ataque" && escolha2 == "papel")
            cout << "Jogador 1 venceu" << endl;
        else if (escolha1 == "papel" && escolha2 == "papel")
            cout << "Ambos venceram" << endl;
        else if (escolha1 == "pedra" && escolha2 == "pedra")
            cout << "Sem ganhador" << endl;
        else if (escolha1 == "ataque" && escolha2 == "ataque")
            cout << "Aniquilacao mutua" << endl;
        else
            cout << "Jogador 2 venceu" << endl;
    }
    return 0;
}
