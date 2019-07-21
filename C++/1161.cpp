#include <iostream>
#include <cmath>
using namespace std;

long long fat (int a);

int main(){
    int x, y;
    while(cin >> x >> y){
        cout << (fat(x) + fat(y)) << endl;
    }
    return 0;
}

long long fat (int a){
    long long fat = 1;
    for ( int i = 1 ; i <= a ; i++){
        fat *= i;
    }
    return fat;
}
