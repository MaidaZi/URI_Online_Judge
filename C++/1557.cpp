#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, space;
    while(cin >> num && num != 0){
        long long int m[num][num];
        for(int i = 0 ; i < num ; i++)
            m[i][0] = pow(2,i);
        for(int i = 0 ; i < num ; i++)
            for(int j = 0 ; j < num-1 ; j++)
                m[i][j+1] = m[i][j]*2;
        for(int i = 0 ; i < num ; i++){
            if(num == 1)
                space = 0;
            else if(num == 2)
                space = 1;
            else if(num == 3 || num == 4)
                space = 2;
            else if(num == 5)
                space = 3;
            else if(num == 6 || num == 7)
                space = 4;
            else if(num == 8 || num == 9)
                space = 5;
            else if(num == 10)
                space = 6;
            else if(num == 11 || num == 12)
                space = 7;
            else if(num == 13 || num == 14)
                space = 8;
            else if( num == 15)
                space = 9;
            cout << setw(space);
            for(int j = 0 ; j < num ; j++){
                if(space == 0)
                    cout << m[i][j];
                else if(space == 1)
                    cout << m[i][j] << setw(space+1);
                else
                    cout << m[i][j] << setw(space+1);
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
