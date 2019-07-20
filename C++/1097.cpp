#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	int j = 7;
	for(int i = 1; i <= 9 ; i+=2 , j+=5){
		for(int k = 1; k <=3 ; k++, j--){
			cout << "I=" << i << " J=" << j << endl;
 		}
 	}
	return 0;
}
