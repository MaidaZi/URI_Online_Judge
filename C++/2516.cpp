#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double s, v1, v2, t;
	while(cin >> s >> v1 >> v2){
		if(v1 > v2){
			t = s/ (v1 - v2);
			cout << fixed << setprecision(2) << t << endl;
		}
		else{
			cout << "impossivel" << endl;
		}
	}

	return 0;
}
