#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	// X = Distancia percorrida (KM)
	double x;
	// Y = Gasto de combustivel (L)
	double y;
	// Media
	double med;
	cin >> x >> fixed >> setprecision (1) >> y;
	med = x/y;
	cout << fixed << setprecision (3)<< med << " km/l" << endl;

    return 0;
}
