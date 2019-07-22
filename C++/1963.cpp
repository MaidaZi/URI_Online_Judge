#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double antigo, atual;
    cin >> antigo >> atual;

    cout << fixed << setprecision(2) << ((100 * atual)/antigo) - 100 << "%" << endl;

    return 0;
}
