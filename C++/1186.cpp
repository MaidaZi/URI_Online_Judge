#include <iostream>
#include <iomanip>
#define MAX 12
using namespace std;

int main(){
    float m[MAX][MAX];
    float soma = 0;
    char op;
    //ESCOLHENDO OPERADOR
    cin >> op;
    //PREENCHIMENTO DO VETOR
    for (int i = 0 ; i < MAX ; i++){
        for (int j = 0 ; j < MAX ; j++){
            cin >> m[i][j];
        }
    }
    //SOMA ABAIXO DA DIAGONAL PRINCIPAL
    int k = 11,cont = 0;
    for (int i = 1 ; i < MAX; i++){
        for (int j = k ; j < MAX ; j++){
            soma += m[i][j];
            cont ++;
        }
        k--;
    }
    //OPERACAO COM VALORES SELECIONADOS
    switch (op) {
        case 'S':
            cout << fixed << setprecision(1) << soma << endl;
        break;
        case 'M':
            cout << fixed << setprecision(1)<< soma / cont << endl;
        break;
    }

    return 0;
}
