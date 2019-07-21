#include <iostream>
using  namespace std;

int main (){
    long long num1, num2;
    cin >> num1 >> num2 ;

    cout << ((num1 + num2) * (num2 - num1 + 1))/2 << endl;

    return 0;
}
