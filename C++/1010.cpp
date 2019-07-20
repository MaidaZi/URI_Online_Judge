#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int codA,codB, pecaA, pecaB ;
	double precoA,precoB,re;

	cin >> codA >> pecaA >> precoA;
	cin >> codB >> pecaB >> precoB;

	re = (pecaA * precoA) + (pecaB * precoB);
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << re << endl;

    return 0;
}
