#include <iostream>
using namespace std;

int main(){
    int caw = 0, soma = 0;
    string leitura;
    for(int i = 0 ; i < 3 ; i++)
        while(caw < 3){
            getline(cin,leitura);
            if(leitura == "caw caw"){
                cout << soma << endl;
                caw++;
                soma = 0;
            }
            else if(leitura == "---")
                soma+=0;
            else if(leitura == "--*")
                soma+=1;
            else if(leitura == "-*-")
                soma+=2;
            else if(leitura == "-**")
                soma+=3;
            else if(leitura == "*--")
                soma+=4;
            else if(leitura == "*-*")
                soma+=5;
            else if(leitura == "**-")
                soma+=6;
            else if(leitura == "***")
                soma+=7;
        }
        
    return 0;
}
