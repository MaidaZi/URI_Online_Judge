#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool troca_valor(const int & a, const int & b);

int main(){
    vector<int> impar;
    vector<int> par;

    int valor;
    int size;
    cin >> size;

    for(int i = 0; i < size ; i++){
        cin >> valor;
        if(valor % 2 == 0){
            par.push_back(valor);
        }
        else{
            impar.push_back(valor);
        }
    }
    sort(par.begin(), par.end());
    for(int i = 0; i < (int)par.size() ; i++){
        cout << par[i] << endl;
    }
    sort(impar.begin(), impar.end(), troca_valor);
    for(int i = 0; i < (int)impar.size() ; i++){
        cout << impar[i] << endl;
    }

    return 0;
}

bool troca_valor(const int & a, const int & b){
    return a > b;
}
