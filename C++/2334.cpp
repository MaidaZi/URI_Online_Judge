#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    unsigned long long int num;

    while(true){
        cin >> num;

        if (num == -1)
            break;
        else if(num > 0)
            cout << num - 1  << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
