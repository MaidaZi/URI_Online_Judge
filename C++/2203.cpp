#include <bits/stdc++.h>
using namespace std;

int main(){
	double Xf, Yf, Xi, Yi, Vi, r1, r2;
    while (cin >> Xf >> Yf >> Xi >> Yi >> Vi >> r1 >> r2) {
        double dist = sqrt(pow(Xi - Xf, 2) + pow(Yi - Yf, 2));
        dist += Vi*1.5;
        if (dist > r1+r2) {
            cout << "N" << endl;
        }
        else{
            cout << "Y" << endl;
        }
    }
	return 0;
}
