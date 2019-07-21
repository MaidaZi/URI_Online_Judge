#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    double valor;
    vector<double> vetor;
    cin >> valor;

    for(int i = 0; i < 99 ; i++){
        vetor.push_back(valor);
        valor /= 2;
    }
    for(int i = 0; i < 100 ; i++){
        cout << "N[" << i << "] = " << fixed << setprecision(4) << vetor[i] << endl;
    }

    return 0;
}
