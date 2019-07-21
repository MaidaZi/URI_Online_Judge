#include <iostream>
using namespace std;

int main (){
    int qtd, num, maior = 0;
    while(cin >> qtd){
        maior = 0;

        for (int i = 0 ; i < qtd ; i++){
            cin >> num;

            if (num > maior){
                maior = num;
            }


        }

        if ( maior < 10){
            cout << "1" << endl;
        }
        else if ( maior >= 10 && maior < 20){
            cout << "2" << endl;
        }
        else {
            cout << "3" << endl;
        }
    }
    return 0;
}
