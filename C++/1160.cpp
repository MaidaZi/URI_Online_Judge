#include <bits/stdc++.h>
using namespace std;

int main() {
    int iterator;
    cin >> iterator;
    int pa, pb, anos;
    double ca, cb;

    for (int i = 0; i < iterator; i++) {
        cin >> pa >> pb >> ca >> cb;
        anos = 0;
        while(true){
            if (anos > 100){
                cout << "Mais de 1 seculo." << endl;
                break;
            }
            else if (pa > pb){
                cout << anos << " anos." << endl;
                break;
            }
            pa += floor (ca/100 * pa);
            pb += floor (cb/100 * pb);
            anos++;
        }

    }

    return 0;
}
