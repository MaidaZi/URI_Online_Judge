#include <iostream>
using namespace std;

int main (){
	int N, maior = 0, s;
	for (int i = 1 ; i <= 100 ; i++){
	cin >> N;
		if (N > maior){
			maior = N;
			s = i;
		}
	}
	cout << maior << endl;
	cout << s << endl;
    return 0;
}
