#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int interacao, cod;
    double qtd, preco = 0;
    cin >> interacao;

    for (int i = 0 ; i < interacao ; i++){
        cin >> cod >> qtd;
        if (cod == 1001)
            preco += qtd * 1.5;
        else if (cod == 1002)
            preco += qtd * 2.5;
        else if (cod == 1003)
            preco += qtd * 3.5;
        else if (cod == 1004)
            preco += qtd * 4.5;
        else if (cod == 1005)
            preco += qtd * 5.5;
    }
    cout << fixed << setprecision(2) << preco << endl;
    return 0;
}
