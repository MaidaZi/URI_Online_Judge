#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int qtd;
    cin >> qtd;
    for (int i = 0 ; i < qtd ; i++){
        int num;
        cin >> num;
        if (num % 2 == 0)
            cout << "1" << endl;
        else
            cout << "9" << endl;
    }

    return 0;
}
