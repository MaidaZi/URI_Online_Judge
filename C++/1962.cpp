#include <iostream>
using namespace std;

int main(){
    int inte, a, valorReal;
    cin >> inte;

    for(int i = 0 ; i < inte ; i++){
        cin >> a;
        valorReal = a - 2015;

        if(valorReal > 0)
            cout << valorReal + 1 << " A.C." << endl;
        else if( valorReal < 0)
            cout << valorReal * (-1) << " D.C." << endl;
        else
            cout << "1 A.C." << endl;
    }
    return 0;
}
