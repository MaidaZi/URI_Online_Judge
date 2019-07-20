#include <iostream>
#include <iomanip>
using namespace std;

int main (){

	int cod, qtd;
	double CQ,XS, XB, torrada, refri;
	cin >> cod >> qtd;

	switch (cod){
		case 1:
			CQ = 4.00 * (double)qtd;
			cout << "Total: R$ "<<  fixed << setprecision(2) << CQ << endl;
		    break;
		case 2:
			XS = 4.50 * (double)qtd;
			cout << "Total: R$ "<< fixed << setprecision(2) << XS << endl;
		    break;
		case 3:
			XB = 5.0 * (double)qtd;
			cout << "Total: R$ "<< fixed << setprecision(2) << XB << endl;
		    break;
		case 4:
			torrada = 2.0 * (double)qtd;
			cout << "Total: R$ "<< fixed << setprecision(2) << torrada << endl;
		    break;
		case 5:
			refri = 1.5 * (double)qtd;
			cout << "Total: R$ "<< fixed << setprecision(2) << refri << endl;
		    break;
        default:
            break;
	}
    return 0;
}
