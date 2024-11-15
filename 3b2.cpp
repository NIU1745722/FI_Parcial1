/*
#include <iostream>
using namespace std;
int main()
{
    int hora, min, sec;
    char c;
    cin >> hora >> c >> min >> c >> sec;
    sec = sec + 1;
    if (sec >= 60) {
        min = min + 1;
        sec = 0;
        if (min >= 60) {
            hora = hora + 1;
            min = 0;
            if (hora >= 24) {
                hora = 0;
            }
        }
    }

    if (hora < 10) {
        cout << "0";
    }
    cout << hora << ":";
    if (min < 10) {
        cout << "0";
    }
    cout << min << ":";
    if (sec < 10) {
        cout << "0";
    }
    cout << sec;
}
*/