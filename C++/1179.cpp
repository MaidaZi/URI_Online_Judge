#include <bits/stdc++.h>
using namespace std;

int main(){
	int par[5], impar[5], j = 0,  k = 0;
    int n;
	for(int i = 0 ; i < 15 ; i++){
		cin >> n;
		if(n % 2 == 0){
			par[j] = n;
			j++;
			if(j == 5){
				for(int a = 0; a < 5 ; a++){
					cout << "par[" << a << "] = " << par[a] << endl;
					par[a] = 0;
				}
				j = 0;
			}
		}
		else{
			impar[k] = n;
			k++;
			if(k == 5){
				for(int b = 0; b < 5 ; b++){
					cout << "impar[" << b << "] = " << impar[b] << endl;
					impar[b] = 0;
				}
				k = 0;
			}
		}
	}
	if(k > 0){
		for(int b = 0; b < k ; b++){
			cout << "impar[" << b << "] = " << impar[b] << endl;
			impar[b] = 0;
		}
	}
	if(j > 0){
		for(int a = 0; a < j ; a++){
			cout << "par[" << a << "] = " << par[a] << endl;
			par[a] = 0;
		}
	}
	return 0;
}
