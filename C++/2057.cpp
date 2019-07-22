#include <iostream>
using namespace std;

int main (){
    int s, t, f;
    cin >> s >> t >> f;

    if (s + t + f >= 0 && s + t + f <= 24)
        cout << s + t + f << endl;
    else if(s + t + f < 0)
        cout << 24 + (s + t + f) << endl;
    else
        cout << (s + t + f) - 24 << endl;

    return 0;
}
