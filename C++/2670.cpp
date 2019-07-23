#include <iostream>
#include <iomanip>
using namespace std;

int main (){

	int a1, a2, a3, cn1, cn2, cn3;
	cin >> a1 >> a2 >> a3;

	cn1 = a2*2 + a3*4;
	cn2 = a1*2 + a3*2;
	cn3 = a1*4 + a2*2;

	if (cn1 <= cn2 && cn1 <= cn3)
		cout << cn1 << endl;
	else if (cn2 <= cn1 && cn2 <= cn3)
		cout << cn2 << endl;
	else
		cout << cn3 << endl;

	return 0;
}
