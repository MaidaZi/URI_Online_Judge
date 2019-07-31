#include <bits/stdc++.h>
#define PI 3.14
using namespace std;

int main() {
    double vol, diam;
    while (cin >> vol >> diam) {
        //raio = diam / 2.0;
        cout << fixed << setprecision(2) << "ALTURA = " << vol / (PI*pow(diam / 2.0, 2)) << endl;
        cout << fixed << setprecision(2) << "AREA = " << PI*pow(diam / 2.0, 2) << endl;
    }
    return 0;
}
