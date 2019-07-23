#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "---------------------------------------" << endl;
	cout << "|  decimal  |  octal  |  Hexadecimal  |" << endl;
	cout << "---------------------------------------" << endl;
    char c = 'A';
    for (int i = 0; i < 16; i++) {
        if(i > 9){
            printf("|     %2d    |   %2o    |      %2c       |\n", i, i, c);
            c++;
        }
        else{
            printf("|     %2d    |   %2o    |      %2x       |\n", i, i, i);
        }
    }
    cout << "---------------------------------------" << endl;
    return 0;
}
