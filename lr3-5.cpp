#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int A, B, C;
    cout << "Введите A:";
    cin >> A;
    cout << "Введите B:";
    cin >> B;
    cout << "Введите C:";
    cin >> C;
    if (abs(A) < 1000 && abs(B) < 1000 && abs(C) < 1000) {
        if (A % 2 == 0  B % 2 == 0  C % 2 == 0) {
            cout << "YES!";

        }
        else {
            cout << "NO!";
        }

    }
    else {
        cout << "Какое-то значение больше 1000 по модулю!";
    }

}

