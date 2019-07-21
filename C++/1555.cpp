#include <iostream>
#include <cmath>
using namespace std;

int MaiorDe3 (int a, int b, int c);

int main(){
    int x, y, rafael, beto, carlos, qtd;
    cin >> qtd;

    for(int i = 0; i < qtd ; i++){
        cin >> x >> y ;

        rafael = pow((3*x),2) + pow(y,2);
        beto = 2*pow(x,2) + pow((5*y),2);
        carlos = -100*x + pow(y,3);

        if (MaiorDe3 (rafael, beto, carlos) == rafael)
            cout << "Rafael ganhou" << endl;
        else if (MaiorDe3 (rafael, beto, carlos) == carlos)
            cout << "Carlos ganhou" << endl;
        else
            cout << "Beto ganhou" << endl;

    }
    return 0;
}

int MaiorDe3 (int a, int b, int c){
    int maior;

    if (a > b && a > c)
        maior = a;
    else if (b > a && b > c)
        maior = b;
    else
        maior = c;

    return maior;
}
