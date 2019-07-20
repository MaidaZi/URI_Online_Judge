#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	double a,b,m;
	cin >> a;
	cin >> b;
	m = ( (a * 3.5) + (b * 7.5) )/ 11;
	cout << "MEDIA = " << fixed << setprecision(5) << m << endl;

	return 0;
}
