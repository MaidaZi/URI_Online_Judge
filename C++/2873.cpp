#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b ,c ,d;
    bool flag = true;
    while(flag){
        cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0)
            flag = false;
        else
            cout << fixed << setprecision(5) << ((a/2 + b )*c )/d << endl;
    }
}
