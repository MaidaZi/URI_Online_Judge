#include <iostream>
#include <iomanip>
using namespace std;

int main (){

	double n1, n2, n3, n4, media, notaF = 0, exame;
	cin >> n1 >> n2 >> n3 >> n4;

	media = (n1*2 + n2*3 + n3*4 + n4)/10;
	cout << "Media: " << fixed << setprecision (1) << media  << endl;

	if (media >= 7.0)
		cout << "Aluno aprovado." << endl;
	else if(media < 5.0)
		cout << "Aluno reprovado." << endl;
	else if (media < 7){
		cout << "Aluno em exame." << endl;
		cin >> exame;
		cout << "Nota do exame: " << exame << endl;

		notaF = (exame + media) / 2;

		if (notaF >= 5.0) {
			cout << "Aluno aprovado." << endl;
			cout << "Media final: " << notaF << fixed << setprecision (1) << endl;
		}
		else {
			cout << "Aluno reprovado." << endl;
			cout << "Media final: " << notaF << fixed << setprecision (1) << endl;
		}
	}

    return 0;
}
