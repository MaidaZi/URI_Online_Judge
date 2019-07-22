#include <iostream>
#include <iomanip>
using namespace std;

double porcentagem(double ini, double fin);
void projetos(double ini, double fin);

int main(){
	double valorIni, valorFin;

	projetos(valorIni, valorFin);

}

double porcentagem(double ini, double fin){
	return (((fin*100) / ini) - 100);
}

void projetos(double ini, double fin){
	int pro = 1;
	while(cin >> ini >> fin){

		cout<<	"Projeto " << pro << ":"<< endl;
		cout<<	"Percentual dos juros da aplicacao: "
			<<	fixed << setprecision(2) << porcentagem(ini,fin)
			<<	" %" << endl << endl;
		pro++;
	}

}
