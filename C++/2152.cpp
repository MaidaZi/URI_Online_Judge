#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int intera;
    cin >> intera;

    for(int i = 0; i < intera; i++){
        int h, m, o;
        cin >> h >> m >> o;

        switch (o){
            case 0:
                cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << " - A porta fechou!" << endl;
                break;
            case 1:
                cout << setfill('0') << setw(2) << h << ":" << setfill('0') << setw(2) << m << " - A porta abriu!" << endl;
                break;
        }
    }

    return 0;
}
