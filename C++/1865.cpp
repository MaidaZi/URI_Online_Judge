#include <iostream>
using namespace std;

int main (){
    int qtd;
    string nome;
    cin >> qtd;

    for (int i = 0; i < qtd ; i++){
        int forca;
        cin >> nome >> forca;
        if (nome == "Thor"){
            cout << "Y" << endl;
        }
        else
            cout << "N" << endl;
    }
    return 0;
}
