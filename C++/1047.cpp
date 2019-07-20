#include <iostream>
using namespace std;

int main( ){

    int hi, mi, hf, mf, duracaoH = 0, duracaoM = 0;
    cin >> hi >> mi >> hf >> mf;

    if(hi == hf ){
        duracaoH = 24;
        duracaoM = 0;

        if (mf > mi){
            duracaoM = mf - mi;
            if (duracaoH >= 24 && duracaoM > 0){
                duracaoH = 0;
            }
        }
        else if (mi > mf){
            duracaoH -= 1;
            duracaoM = 60 -(mi - mf);
        }
    }

    else if (hi < hf){
        for(int i = hi ; i <= hf ; i++){
            duracaoH++;
        }
        if (mf >= mi){
            duracaoH -= 1;
            duracaoM = mf - mi;
        }
        else{
            duracaoH -= 2;
            duracaoM = 60 -(mi - mf);
        }
    }

    else {// hi > hf
        for(int i = hi ; i != hf ; i++){
            if (i == 24){
                i = 0;
            }
            duracaoH++;
        }
        if (mf > mi){
            duracaoM = mf - mi;
            if (duracaoH >= 24 && duracaoM > 0){
                duracaoH = 0;
            }
        }
        else if (mi > mf){
            duracaoH -= 1;
            duracaoM = 60 -(mi - mf);
        }
    }
    cout << "O JOGO DUROU "<< duracaoH <<" HORA(S) E "<< duracaoM <<" MINUTO(S)"<< endl ;

    return 0;
}
