#include <iostream>
using namespace std;

int main (){
	int time, hora = 0 , min = 0, seg = 0;
	cin >> time;
	while ( time >= 3600 ){
		time -= 3600;
		hora ++;
	}
	while ( time >= 60 ){
		time -= 60;
		min ++;
	}
	while ( time > 0 ){
		time -= 1;
		seg ++;
	}
	cout << hora << ":" << min << ":" << seg << endl;

    return 0;
}
