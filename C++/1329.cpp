#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int c = 0;
	while (c == 0){
		int n, jogadas, zero = 0, um = 0;
		cin >> n;
		for (int i = 0 ; i  < n ; i++){
			cin >> jogadas ;
			switch (jogadas){
				case 0:
					zero ++;
				break;
				case 1:
					um ++;
				break;
			}
		}
		if (n != 0)
			cout << "Mary won " << zero << " times and John won "<< um <<" times" << endl;
		if (n == 0)
			c = 1;
	}

	return 0;
}
