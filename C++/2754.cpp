#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double a = 234.345, b = 45.698;
    cout << fixed << setprecision(6) << a << " - " << fixed << setprecision(6) << b << endl;
    cout << fixed << setprecision(0) << a << " - " << fixed << setprecision(0) << b << endl;
    cout << fixed << setprecision(1) << a << " - " << fixed << setprecision(1) << b << endl;
    cout << fixed << setprecision(2) << a << " - " << fixed << setprecision(2) << b << endl;
    cout << fixed << setprecision(3) << a << " - " << fixed << setprecision(3) << b << endl;
    cout << fixed << setprecision(6) << a/100 << "e+02 - " << fixed << setprecision(6) << b/10 << "e+01" << endl;
    cout << fixed << setprecision(6) << a/100 << "E+02 - " << fixed << setprecision(6) << b/10 << "E+01"<< endl;
    cout << fixed << setprecision(3) << a << " - " << fixed << setprecision(3) << b << endl;
    cout << fixed << setprecision(3) << a << " - " << fixed << setprecision(3) << b << endl;
    return 0;
}
