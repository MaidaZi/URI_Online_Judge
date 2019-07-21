#include <iostream>
#include <iomanip>
#define MAX 12
using namespace std;

int main(){
    float m[MAX][MAX], lin;
    float soma = 0;
    char op;

    cin >> lin >> op ;
    for (int i = 0 ; i < MAX ; i++){
        for (int j = 0 ; j < MAX ; j++){
            cin >> m[i][j];
        }
    }
    for (int i = 0 ; i < MAX ; i++){
        for (int j = 0 ; j < MAX ; j++){
            if (i == lin){
                soma += m[i][j];
            }
        }
    }
    switch (op) {
        case 'S':
            cout << fixed << setprecision(1) << soma << endl;
        break;
        case 'M':
            cout << fixed << setprecision(1)<< soma / 12 << endl;
        break;
    }

    return 0;
}
