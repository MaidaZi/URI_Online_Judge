#include <bits/stdc++.h>
using namespace std;

int main () {
    string phase;
    int it, count;
    cin >> it;
    for (int i = 0; i < it; i++) {
        cin >> phase;
        count = 0;
        for (int j = 0; j < (int)phase.size(); j++) {
            if(phase[j] == '1')
                count += 2;
            else if(phase[j] == '2')
                count += 5;
            else if(phase[j] == '3')
                count += 5;
            else if(phase[j] == '4')
                count += 4;
            else if(phase[j] == '5')
                count += 5;
            else if(phase[j] == '6')
                count += 6;
            else if(phase[j] == '7')
                count += 3;
            else if(phase[j] == '8')
                count += 7;
            else if(phase[j] == '9')
                count += 6;
            else
                count += 6;
        }
        cout << count << " leds" << endl;
    }
    return 0;
}
