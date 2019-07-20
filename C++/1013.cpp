#include <iostream>
using namespace std;

int main(){
	int a,b,c, maior;
	cin >> a >> b >> c;

	if (a > b && a > c)
        maior = a;
	else if (b > a && b > c)
		maior = b;
 	else if ( c > a && c > b)
 		maior = c;
	cout << maior << " eh o maior"<< endl;
    
    return 0;
}
