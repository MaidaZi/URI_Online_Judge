#include <bits/stdc++.h>
using namespace std;
char confere(int* vetor);

int main(){
    int size = 5;
    int* vetor = new int[5];
    for (int i = 0; i < size; i++)
        cin >> vetor[i];

    char c = confere(vetor);
    cout << c << endl;
    delete vetor;

    return 0;
}

char confere(int* vetor){
    int maior = 0 , menor = 0;
    for (int i = 0, j = 1; j < 4; i++, j++) {
        if(vetor[i] >= vetor[j])
            maior++;
        else if(vetor[i] <= vetor[j])
            menor++;
    }
    if(maior == 3)
        return 'D';
    else if(menor == 3)
        return 'C';
    else
        return 'N';
}
