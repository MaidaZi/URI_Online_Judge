#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num, soma = 0;
    int aux;

    while (cin >> num) {
        for (int i = 0; i < num; i++) {
            cin >> aux;
            if(aux == 1){
                soma++;
            }
        }
        if((double)(soma)/(double)num >= (2.0/3.0)){
            cout << "impeachment" << endl;
        }
        else{
            cout << "acusacao arquivada" << endl;
        }
        soma = 0;
    }
	return 0;
}
