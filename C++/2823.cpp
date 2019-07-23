#include <iostream>
using namespace std;

int main(){
    int intera, num1, num2;
    float soma = 0;
    cin >> intera;

    for(int i = 0 ; i < intera ; i++){
        cin >> num1 >> num2;
        soma += (double)num1/(double)num2;
    }
    if (soma <= 1)
        cout << "OK" << endl;
    else
        cout << "FAIL" << endl;

    return 0;
}
