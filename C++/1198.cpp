#include <iostream>
#include <cstdlib>
using  namespace std;

int main (){
    long long hashmat, elias;
    while(cin >> hashmat >> elias){
        cout << abs(elias - hashmat) << endl;
    }
    return 0;
}
