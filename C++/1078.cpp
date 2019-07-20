#include <iostream>
using namespace std;

int main (){
	int num; cin >> num;

	if (num > 2 && num < 1000 ){
		for (int lin = 1; lin <= 10; lin ++){
			cout << lin << " x " << num << " = ";
			for (int col = 1; col <= 1; col++)
				cout << lin * num << endl;
		}
	}
    return 0;
}
