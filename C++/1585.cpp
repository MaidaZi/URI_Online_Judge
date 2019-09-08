#include <iostream>
using namespace std;

int main () {
    int it, n1, n2;
    cin >> it;
    for (size_t i = 0; i < (unsigned)it; i++) {
        cin >> n1 >> n2;
        cout << (n1 * n2)/2 << " cm2" << endl;
    }
    return 0;
}
