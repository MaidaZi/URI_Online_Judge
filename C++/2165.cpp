#include <bits/stdc++.h>
using namespace std;

int main() {
    string phase;
    getline(cin,phase);
    if(phase.length() <= 140){
        cout << "TWEET" << endl;
    }
    else{
        cout << "MUTE" << endl;
    }
    return 0;
}
