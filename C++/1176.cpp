#include <iostream>
using namespace std;

unsigned long long fib(int n);

int main(){
	int intera;
	cin >> intera;
	for ( int i = 0; i < intera ; i++){
		int n;
		cin >> n;
		cout << "Fib(" << n << ") = " << fib(n) << endl;
	}
	return 0;
}
unsigned long long fib(int n){
	unsigned long long fib[n];
	fib[0]=0;
	fib[1]=1;

	if (n == 0){
		return fib[0] = 0;
	}
	else if (n == 1){
		return fib[1] = 1;
	}
	else{
		for (int i = 2 ; i <= n ; i++){
			fib[i] = fib[i - 2] + fib[i - 1];
		}
		return fib[n];
	}
}
