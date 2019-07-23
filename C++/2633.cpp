#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd, val;
    string nome;
    map<int, string> v;
    map<int, string> :: iterator it;
    while (cin >> qtd) {
        for (int i = 0; i < qtd; i++) {
            cin >> nome >> val;
            v[val] = nome;
        }
        for (it = v.begin(); it != v.end(); it++) {
            if(it == v.begin()){
                cout << it->second ;
            }
            else{
                cout << " " << it->second;
            }
        }
        cout << endl;
        v.clear();
    }
	return 0;
}
