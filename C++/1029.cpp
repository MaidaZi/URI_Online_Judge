#include <bits/stdc++.h>
using namespace std;

long long int fib(int num, int& calls);

int main() {
    int it, num, calls;
    cin >> it;
    for (int i = 0; i < it; i++) {
        calls = 0;
        cin >> num;
        long long int val = fib(num, calls);
        cout << "fib(" << num << ") = " << calls - 1 << " calls = " << val << endl;
    }
    return 0;
}

long long int fib(int num, int& calls){
    if (num == 0){
        calls ++;
        return 0;
    }
    else if (num == 1){
        calls ++;
        return 1;
    }
    else{
        calls ++;
        return fib(num - 1, calls) + fib(num - 2, calls);
    }
}
