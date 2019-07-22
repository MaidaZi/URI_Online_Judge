#include <bits/stdc++.h>
using namespace std;

double fib(int n);

int main() {
    int num;
    cin >> num;
    cout << fixed << setprecision(1) << fib(num);
    cout << endl;
    return 0;
}

double fib(int n){
    return (pow((1.0 + sqrt(5.0))/2.0,n) - pow((1.0 - sqrt(5.0))/2.0,n)) / sqrt(5.0);
}
