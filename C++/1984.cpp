#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
    string valor;
    cin >> valor;

    reverse(valor.begin(), valor.end());

    cout << valor << endl;

    return 0;
}
