#include <iostream>
using namespace std;

int main () {

	int inicial, fim, temp, cont = 0;

	cin >> inicial >> fim;

	if (inicial == fim )
		cout << "O JOGO DUROU 24 HORA(S)" << endl;

	else if (fim > inicial){
		temp = fim - inicial;
		cout << "O JOGO DUROU " << temp << " HORA(S)" << endl;
	}
	else{
		for( int i = inicial ; i <= 24 ; i++){
		 	if (i == 24){
		 		i = 0;
		 		cont++;
		 	}
		 	else {
		 		cont++;
			}
			if (i == fim){
				cont -=1;
				break;
		  	}
		}
	    cout << "O JOGO DUROU " << cont << " HORA(S)" << endl;
 	}

    return 0;
}
