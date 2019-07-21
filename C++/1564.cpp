#include <iostream>
using namespace std;

int main(){
	int N;

	while (cin >> N){
		if (0 < N && N <= 100)
			cout << "vai ter duas!" << endl;
		else
			cout << "vai ter copa!" << endl;
	}

return 0;
}
