#include <bits/stdc++.h>
using namespace std;

double minin(double num);
double manao(double num);

int main() {
    double num;
    cin >> num;
    cout << fixed << setprecision(1) << minin(num) << " " << manao(num) << endl;
    return 0;
}

double minin(double num){
    return num / log(num);
}
double manao(double num){
    return 1.25506*(num / log(num));
}
