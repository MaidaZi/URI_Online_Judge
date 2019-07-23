#include <iostream>
using namespace std;

int main(){

    for(int i = 0 ; i < 39 ; i ++){
        cout << '-';
    }
    cout << endl;

    for(int i = 0 ; i < 39 ; i ++){
        if (i == 0 ){
            cout << "|x = 35";
            i+=6;
        }
        else if(i == 38){
            cout <<'|';
        }
        else {
            cout <<" ";
        }
    }
    cout << endl;

    for(int i = 0 ; i < 39 ; i ++){
        if (i == 0 || i == 38 ){
            cout << '|';
        }
        else {
            cout <<" ";
        }
    }
    cout << endl;

    for(int i = 0 ; i < 39 ; i ++){
        if (i == 0 || i == 38 ){
            cout << '|';
        }
        else if(i == 16){
            cout << "x = 35";
            i+=5;
        }
        else {
            cout <<" ";
        }
    }
    cout << endl;

    for(int i = 0 ; i < 39 ; i ++){
        if (i == 0 || i == 38 ){
            cout << '|';
        }
        else {
            cout <<" ";
        }
    }
    cout << endl;

    for(int i = 0 ; i < 39 ; i ++){
        if (i == 0 || i == 38 ){
            cout << '|';
        }
        else if(i == 32){
            cout << "x = 35";
            i+=5;
        }
        else {
            cout <<" ";
        }
    }
    cout << endl;

    for(int i = 0 ; i < 39 ; i ++){
        cout << '-';
    }
    cout << endl;

    return 0;
}
