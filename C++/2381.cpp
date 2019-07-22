#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main (){
    int n, k;
    vector<string> vetor;
    string name;

    cin >> n >> k;

    for(int i = 0 ; i < n ; i++){
        cin >> name;
        vetor.push_back(name);
    }

    sort(vetor.begin(), vetor.end());

    cout << vetor[k-1] << endl;

    return 0;
}
