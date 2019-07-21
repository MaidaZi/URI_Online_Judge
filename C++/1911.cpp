#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    int qtd = 1;
    map<string, string> alunos;

    while (cin >> qtd && qtd != 0){
        string aux1, aux2;
        for (int i = 0; i < qtd; i++) {
            cin >> aux1 >> aux2;
            alunos[aux1] = aux2;
        }
        cin >> qtd;
        int cont2 = 0;
        for (int i = 0; i < qtd; i++) {
            cin >> aux1 >> aux2;
            int cont1 = 0;
            string aux3 = alunos[aux1];
            for (int j = 0 ; j < (int)aux3.size() ; j++) {
                if(aux3[j] != aux2[j]){
                    cont1 ++;
                }
                //cout << "aux3 = " << alunos[aux1] << endl;
                //cout << "aux2 = " << aux2 << endl;
            }
            if(cont1 > 1){
                cont2 ++;
            }
        }
        cout << cont2 << endl;
    }

    return 0;
}
