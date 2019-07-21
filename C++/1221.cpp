#include <iostream>
#include <cmath>
using  namespace std;

void primos (int);

int main (){
    int intera;
    cin >> intera;
    for( int i = 0; i < intera ; i++){
        int num1;
        cin >> num1;
        primos(num1);
    }

    return 0;
}

void primos (int num1){
    bool flag = true;
    int a = sqrt(num1);

    for( int i = 2; i <= a; i++){
        if (num1 % i == 0)
            flag = false;
    }

    if(flag == true)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}
