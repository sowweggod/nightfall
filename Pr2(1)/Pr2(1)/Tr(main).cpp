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
        cout << "Введите стороны a, b и c " << i + 1 << " треугольника: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            setlocale(LC_ALL, "RUSSIAN");
            mas[i].show();
            cout << "Треугольника с такими сторонами не существует, попробуйте еще раз." << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        setlocale(LC_ALL, "");
        cout << "Периметр треугольника: " << mas[i].perimetr() << endl;
        cout << "Площадь треугольника: " << mas[i].square() << endl;
    }
    return 0;
}