#include <bits/stdc++.h>
using namespace std;

int main() {
    string phase;
    string word;
    string bigWord;

    while(getline(cin, phase) && phase != "0"){
        stringstream s(phase);
        vector<int> v;
        vector<int>::iterator it;
        while (s >> word) {
            v.push_back(word.size());
            if(word.size() >= bigWord.size()){
                bigWord = word;
            }
        }
        for (it = v.begin() ; it != v.end(); ++it){
            if(it == v.begin()){
                cout << *it;
            }
            else{
                cout << "-" << *it;
            }
        }
        cout << endl;
    }
    cout << endl << "The biggest word: " << bigWord << endl;
    return 0;
}
