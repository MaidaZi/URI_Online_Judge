#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	int casos, qtd, total = 0, c = 0,r = 0,s = 0 ;
	char animal;
	cin >> casos;

	for (int i = 1 ; casos >= i ; i ++){
		cin >> qtd >> animal;
			switch (animal){
				case 'C':
					total += qtd;
					c += qtd;
				break;
				case 'R':
					total += qtd;
					r += qtd;
				break;
				case 'S':
					total += qtd;
					s += qtd;
				break;
		 	}
	}

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << c << endl;
	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((double)c * 100.00) / (double)total  << " %" << endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) << ((double)r * 100.00) / (double)total   << " %" << endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) << ((double)s * 100.00) / (double)total   << " %" << endl;

    return 0;
}
