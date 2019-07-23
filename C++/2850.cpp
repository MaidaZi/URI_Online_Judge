#include <iostream>
#include <cmath>
using namespace std;

int contaDig(long long valor);

int main(){
    string perna;
    while(getline(cin,perna)){
        if(perna == "esquerda"){
            cout << "ingles" << endl;
        }
        else if(perna == "direita"){
            cout << "frances" << endl;
        }
        else if(perna == "nenhuma"){
            cout << "portugues" << endl;
        }
        else{
            cout << "caiu" << endl;
        }
    }

    return 0;
}
