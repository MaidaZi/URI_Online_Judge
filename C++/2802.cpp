#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int num;
    cin >> num;
    cout << 1 + (((num - 1)*num)/2) + (((num)*(num - 1)*(num - 2 )*(num - 3))/24) << endl;
    return 0;
}
