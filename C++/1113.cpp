#include <iostream>
using namespace std;

int main (){
	int x , y;
	int cont = 0;

	while( cont == 0 ){
		cin >> x >> y;

		if ( x > y )
			cout << "Decrescente" << endl;
		else if ( y > x )
			cout << "Crescente" << endl;
		else
			cont ++;
	}
    return 0;
}
