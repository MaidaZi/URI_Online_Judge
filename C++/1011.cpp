#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double r, vol, pi=3.14159;
	cin >> r;
	vol = (4.0/3.0)*pi*r*r*r;

	cout << "VOLUME = " << fixed << setprecision(3) << vol << endl;
    return 0;
}
