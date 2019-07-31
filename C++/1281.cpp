#include <bits/stdc++.h>
#define PI 3.14
using namespace std;

int main() {
    int times;
    cin >> times;
    for (int i = 0; i < times; i++) {
        map <string,float> mapp;
        map <string,float> :: iterator it;
        string name; float val;
        int prod;
        cin >> prod;
        for (int j = 0; j < prod; j++) {
            cin >> name >> val;
            mapp[name] = val;
        }
        cin >> prod;
        double sum = 0;
        for (int j = 0; j < prod ; j++ ) {
            cin >> name;
            for (it = mapp.begin(); it != mapp.end(); it++) {
                if(it->first == name){
                    int qtd;
                    cin >> qtd;
                    sum += (double)qtd * it->second;
                    break;
                }
            }
        }
        cout << "R$ " << fixed << setprecision(2) << sum << endl;
    }
    return 0;
}
