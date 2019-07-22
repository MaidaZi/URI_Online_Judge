#include <iostream>
#include <cstring>
#define MAX 10
using namespace std;

int main(){
    char dodo[MAX], leo[MAX], pepper[MAX];
    while(cin >> dodo >> leo >> pepper){
        //DODO Ganha
        if(strcmp(dodo, "papel") == 0 && strcmp(leo, "pedra") == 0 && strcmp(pepper, "pedra") == 0)
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        else if(strcmp(dodo, "pedra") == 0 && strcmp(leo, "tesoura") == 0 && strcmp(pepper, "tesoura") == 0)
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        else if(strcmp(dodo, "tesoura") == 0 && strcmp(leo, "papel") == 0 && strcmp(pepper, "papel") == 0)
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        //LEO Ganha
        else if(strcmp(dodo, "papel") == 0 && strcmp(leo, "tesoura") == 0 && strcmp(pepper, "papel") == 0)
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        else if(strcmp(dodo, "tesoura") == 0 && strcmp(leo, "pedra") == 0 && strcmp(pepper, "tesoura") == 0)
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        else if(strcmp(dodo, "pedra") == 0 && strcmp(leo, "papel") == 0 && strcmp(pepper, "pedra") == 0)
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        //PEPPER Ganha
        else if(strcmp(dodo, "pedra") == 0 && strcmp(leo, "pedra") == 0 && strcmp(pepper, "papel") == 0)
            cout << "Urano perdeu algo muito precioso..." << endl;
        else if(strcmp(dodo, "tesoura") == 0 && strcmp(leo, "tesoura") == 0 && strcmp(pepper, "pedra") == 0)
            cout << "Urano perdeu algo muito precioso..." << endl;
        else if(strcmp(dodo, "papel") == 0 && strcmp(leo, "papel") == 0 && strcmp(pepper, "tesoura") == 0)
            cout << "Urano perdeu algo muito precioso..." << endl;
        //EMPATE
        else
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
    }
    return 0;
}
