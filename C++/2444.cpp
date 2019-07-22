#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int v, t;
    cin >> v >> t;

    for (int i = 0 ; i < t ; i++){
        int nw;
        cin >> nw;
        v += nw;

        if (v > 100){
            v = 100;
        }
        else if (v < 0){
            v = 0;
        }
    }
    cout << v << endl;

    return 0;
}
