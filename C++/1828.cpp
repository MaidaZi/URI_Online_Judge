#include <iostream>
using namespace std;

int main (){
    int qtd;
    cin >> qtd;
    string a, b;

    for (int i = 0 ; i < qtd ; i++){
        cin >> a >> b;
        cout << "Caso #" << i +1 <<": ";

        if(a == "tesoura" && b == "papel")//1
            cout << "Bazinga!" << endl;
        else if(a == "papel" && b == "pedra")//2
            cout << "Bazinga!" << endl;
        else if(a == "pedra" && b == "lagarto")//3
            cout << "Bazinga!" << endl;
        else if(a == "lagarto" && b == "Spock")//4
            cout << "Bazinga!" << endl;
        else if(a == "Spock" && b == "tesoura")//5
            cout << "Bazinga!" << endl;
        else if(a == "tesoura" && b == "lagarto")//6
            cout << "Bazinga!" << endl;
        else if(a == "lagarto" && b == "papel")//7
            cout << "Bazinga!" << endl;
        else if(a == "papel" && b == "Spock")//8
            cout << "Bazinga!" << endl;
        else if(a == "Spock" && b == "pedra")//9
            cout << "Bazinga!" << endl;
        else if(a == "pedra" && b == "tesoura")//10
            cout << "Bazinga!" << endl;
        else if (a == b)
            cout << "De novo!" << endl;
        else
            cout << "Raj trapaceou!" << endl;
    }
    return 0;
}
