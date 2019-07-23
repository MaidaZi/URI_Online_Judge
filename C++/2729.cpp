#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){

    string itens, str;
    int qtd, aux;
    cin >> qtd;
    getchar();
    for (int i = 0; i < qtd; i++) {
        set<string> lista;
        set<string> :: iterator it;
        aux = 0;
        getline(cin, itens);
        int sizeofstr = itens.size();
        for (int j = 0; j < sizeofstr ; j++) {
            if(itens[j] == ' '){
                str = itens.substr(aux, j - aux);
                aux = j+1;
                lista.insert(str);
            }
        }
        str = itens.substr(aux, sizeofstr - aux);
        lista.insert(str);
        for (it = lista.begin(); it != lista.end(); it++) {
            if(it == lista.begin()){
                cout << *it;
            }
            else{
                cout << " " << *it;
            }
        }
        cout << endl;
    }

    return 0;
}
