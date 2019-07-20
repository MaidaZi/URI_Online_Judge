#include <iostream>
using namespace std;

int main (){
	for (int i = 1; i < 28 ;){
		for (int j = 60 ; j >= 0 ; j-=5 , i+=3)
			cout << "I=" << i << " "<< "J=" << j << endl;
		break;
	}

    return 0;
}
