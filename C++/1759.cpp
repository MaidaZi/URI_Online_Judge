#include <iostream>
using namespace std;

int main (){
	int num;
	cin >> num;
	for (int i = 1; i <= num ; i ++ ){
		if (i != num)
		    cout << "Ho ";
		else if (i == num )
		 	cout << "Ho!" << endl;
	}

    return 0 ;
}
