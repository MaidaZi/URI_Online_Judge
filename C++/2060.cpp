#include <iostream>

using namespace std;

int multp2(int &valor);
int multp3(int &valor);
int multp4(int &valor);
int multp5(int &valor);

int main(){
    int indice, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

    cin >> indice;
    int vet[indice];
    for( int i = 0 ; i < indice ; i ++){
        cin >> vet[i];
        if((multp2(vet[i])) == 0)
            cont2 ++;
        if((multp3(vet[i])) == 0)
            cont3 ++;
        if((multp4(vet[i])) == 0)
            cont4 ++;
        if((multp5(vet[i])) == 0)
            cont5 ++;
    }
    cout << cont2 << " Multiplo(s) de 2" << endl;
    cout << cont3 << " Multiplo(s) de 3" << endl;
    cout << cont4 << " Multiplo(s) de 4" << endl;
    cout << cont5 << " Multiplo(s) de 5" << endl;

	return 0;
}

int multp2(int &valor){
    if(valor % 2 == 0){
        return 0;
    }
    else{
        return 1;
    }
}
int multp3(int &valor){
    if(valor % 3 == 0){
        return 0;
    }
    else{
        return 1;
    }
}
int multp4(int &valor){
    if(valor % 4 == 0){
        return 0;
    }
    else{
        return 1;
    }
}
int multp5(int &valor){
    if(valor % 5 == 0){
        return 0;
    }
    else{
        return 1;
    }
}
