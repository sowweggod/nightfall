#include <iostream>
#include <cmath>
#include "Triangle.h"
using namespace std;

int main()
{
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        setlocale(LC_ALL, "RUSSIAN");
        cout << "������� ������� a, b � c " << i + 1 << " ������������: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            setlocale(LC_ALL, "RUSSIAN");
            mas[i].show();
            cout << "������������ � ������ ��������� �� ����������, ���������� ��� ���." << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        setlocale(LC_ALL, "");
        cout << "�������� ������������: " << mas[i].perimetr() << endl;
        cout << "������� ������������: " << mas[i].square() << endl;
    }
    return 0;
}