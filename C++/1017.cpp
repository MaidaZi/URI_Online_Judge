#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double distanciaPer, litros, autoMovel = 12;
	int tempo /*em horas*/,velMed /*em km/h*/;

	cin >> tempo >> velMed;

	distanciaPer = (double)velMed * (double)tempo;
	litros = distanciaPer / autoMovel;

	cout << fixed << setprecision(3) << litros << endl;

    return 0;
}
