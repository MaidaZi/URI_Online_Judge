#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int intera;
    double menor = 100;
    while(cin >> intera){
        menor = 100;
        for(int i = 0 ; i < intera ; i++){
            double a;
            cin >> a;

            if(a < menor){
                menor = a;
            }

        }
        cout << menor << endl;
    }
    return 0;
}
