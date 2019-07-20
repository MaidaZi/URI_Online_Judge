#include <iostream>
#include <cstring>
using namespace std;

int main (){
	char p1[50];
	cin >> p1;

	if (strcmp(p1, "vertebrado") == 0){
		cin >> p1;
		if (strcmp(p1, "ave") == 0){
			cin >> p1;
			if (strcmp(p1, "carnivoro") == 0){
				cout << "aguia" << endl;
			}
			else if (strcmp (p1, "onivoro") == 0)
				cout << "pomba" << endl;
		}
		else if (strcmp(p1, "mamifero") == 0){
			cin >> p1;
			if( strcmp(p1, "onivoro") == 0)
				cout << "homem" << endl;
			else if (strcmp(p1, "herbivoro") == 0)
				cout << "vaca" << endl;
		}
	}
	else if (strcmp(p1, "invertebrado") == 0){
		cin >> p1;
		if (strcmp(p1, "inseto") == 0){
			cin >> p1;
			if (strcmp(p1, "hematofago") == 0){
				cout << "pulga" << endl;
			}
			else if (strcmp (p1, "herbivoro") == 0)
				cout << "lagarta" << endl;
		}
		else if (strcmp(p1, "anelideo") == 0){
			cin >> p1;
			if( strcmp(p1, "hematofago") == 0)
				cout << "sanguessuga" << endl;
			else if (strcmp(p1, "onivoro") == 0)
				cout << "minhoca" << endl;
		}
	}
    return 0;
}
