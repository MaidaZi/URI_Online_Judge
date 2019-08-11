#include <bits/stdc++.h>
using namespace std;

int main() {
    int it;
    cin >> it;
    for (int i = 0; i < it; i++) {
        string phase, str1, str2, str3;
        cin >> phase;

        int j, k;
        for (j = 0; j < (int)phase.size(); j++)
            if(phase[j] >= 48 && phase[j] <= 57)
                break;
        for (k = j; k < (int)phase.size(); k++)
            if(phase[k] < 48 || phase[k] > 57)
                break;
        str1 = phase.substr(j, k-j);

        for (j = k + 1; j < (int)phase.size(); j++)
            if(phase[j] >= 48 && phase[j] <= 57)
                break;
        for (k = j; k < (int)phase.size(); k++)
            if(phase[k] < 48 || phase[k] > 57)
                break;
        str2 = phase.substr(j, k-j);

        for (j = k + 1; j < (int)phase.size(); j++)
            if(phase[j] >= 48 && phase[j] <= 57)
                break;
        for (k = j; k < (int)phase.size(); k++)
            if(phase[k] < 48 || phase[k] > 57)
                break;
        str3 = phase.substr(j, k-j);

        cout << stoi(str1) + stoi(str2) + stoi(str3) << endl;
    }
    return 0;
}
