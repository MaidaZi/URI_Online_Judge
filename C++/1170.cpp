#include <iostream>
using  namespace std;

int main (){
    int intera, cont;
    cin >> intera;

    for(int i = 0 ; i < intera ; i++){
        cont = 0;
        double kilo;
        cin >> kilo;

        while(1 < kilo ){
            kilo = kilo/2;
            cont++;
        }
        cout << cont << " dias" << endl;
    }

    return 0;
}
