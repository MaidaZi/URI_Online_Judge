#include <iostream>
#include <iomanip>
#define MAX 12
using namespace std;

int main(){
    double m[MAX][MAX];
    double soma = 0;
    char op;
    //ESCOLHENDO OPERADOR
    cin >> op;
    //PREENCHIMENTO DO MATRIZ
    for (int i = 0 ; i < MAX ; i++){
        for (int j = 0 ; j < MAX ; j++){
            cin >> m[i][j];
        }
    }
    //SOMA ABAIXO DA DIAGONAL PRINCIPAL
    int cont = 0;
    for (int i = 0 ; i < (MAX/2)-1; i++){
        for (int j = 1 + i ; j < (MAX - 1) - i; j++){
            soma += m[i][j];
            cont ++;
        }
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
