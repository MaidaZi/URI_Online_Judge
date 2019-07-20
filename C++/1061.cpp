#include <iostream>
using namespace std;

void converteHora (int &total_segundos, int &dia, int &hora, int &min, int &seg);

int main(){
    int total_segundos;
    int dia1 = 0,hora1 = 0, min1 = 0, seg1 = 0;
    int dia2 = 0,hora2 = 0, min2 = 0, seg2 = 0;
    char diaC1[4], diaC2[4];
    string doisPontos;
    cin >> diaC1 >> dia1 >> hora1 >> doisPontos >> min1 >> doisPontos>> seg1;
    cin >> diaC2 >> dia2 >> hora2 >> doisPontos >> min2 >> doisPontos>> seg2;

    dia1 = dia2 - dia1;
    hora1 = hora2 - hora1;
    min1 = min2 - min1;
    seg1 = seg2 - seg1;

    total_segundos = (dia1 * 86400) + (hora1 * 3600) + (min1 * 60) + seg1;

    converteHora(total_segundos, dia1, hora1, min1, seg1);

    cout << dia1 << " dia(s)" << endl;
    cout << hora1 << " hora(s)" << endl;
    cout << min1 << " minuto(s)" << endl;
    cout << seg1 << " segundo(s)" << endl;

    return 0;
}

void converteHora (int &total_segundos, int &dia, int &hora, int &min, int &seg){
    dia = 0; hora = 0; min = 0; seg = -1;
    while(total_segundos >= 0){
        if(total_segundos >= 86400){
            total_segundos -= 86400;
            dia ++;
        }
        else if(total_segundos >= 3600){
            total_segundos -= 3600;
            hora ++;
        }
        else if(total_segundos >= 60){
            total_segundos -= 60;
            min ++;
        }
        else{
            total_segundos -= 1;
            seg ++;
        }
    }
}
