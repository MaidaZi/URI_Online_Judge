#include <iostream>
using namespace std;

int main (){
	int x, contS = 0, contN = 0;
	cin >> x;
	for (int i = 1 ; x >= i ; i++){
		int num;
		cin >> num;

		for (int N = 10 ; N <= 20 ; N++){
			if ((num >= 10 && num <= 20)){
				contS ++;
				break;
			}
			else{
				contN ++;
				break;
			}
		}

	}
	cout << contS << " in" << endl;
	cout << contN << " out" << endl;
    return 0;
}
