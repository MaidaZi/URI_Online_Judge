#include <iostream>
using namespace std;

int valorDoGolpe (int bonus, int ataque, int defesa, int level);
void maiorOuIgual (int valor1, int valor2);

int main (){
    int instancia;
    int dabriel , guarte;

    cin >> instancia;

    for (int i = 0 ; i < instancia ; i++){
        int bonus = 0, Ai = 0, Di = 0, Li = 0;

        cin >> bonus >> Ai >> Di >> Li;
        dabriel = valorDoGolpe (bonus, Ai, Di, Li);

        cin >> Ai >> Di >> Li;
        guarte = valorDoGolpe (bonus, Ai, Di, Li);

        maiorOuIgual (dabriel,guarte);
    }

    return 0;
}

int valorDoGolpe (int bonus, int ataque, int defesa, int level){
    int valorDoGolpe = ((ataque + defesa)/2);
        if(level % 2 == 0)
            valorDoGolpe += bonus;

    return valorDoGolpe;
}

void maiorOuIgual (int valor1, int valor2){
    if (valor1 > valor2)
        cout <<"Dabriel" << endl;
    else if (valor2 > valor1)
        cout <<"Guarte" << endl;
    else
        cout <<"Empate" << endl;
}
