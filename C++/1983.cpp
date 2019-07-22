#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int interacoes, cod, cont = 0, salvaCod;
    double nota, salvaNota = 0;
    cin >> interacoes ;

    for(int i = 0 ; i < interacoes ; i++){
        cin >> cod >> nota ;
        if(nota >= 8){
            if(nota > salvaNota){
                salvaNota = nota;
                salvaCod = cod;
            }
            cont ++;
        }

    }
    if(cont == 0)
        cout << "Minimum note not reached" << endl;
    else
        cout << salvaCod << endl;

    return 0;
}
