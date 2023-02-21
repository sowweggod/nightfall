#include "Figure.h"
#include <iostream>
using namespace std;

int main() {
    Figure mas[8];

    float x1, x2, x3, x4;
    float y1, y2, y3, y4;

    for (int i = 0; i < 3; i++) {
        setlocale(LC_ALL, "");
        cout << "Введите координаты для 1 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x1 >> y1;

        cout << "Введите координаты для 2 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x2 >> y2;

        cout << "Введите координаты для 3 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x3 >> y3;

        cout << "Введите координаты для 4 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x4 >> y4;

        mas[i].figure(x1, x2, x3, x4, y1, y2, y3, y4);

    }

    for (int i = 0; i < 3; i++) {
        cout << "Стороны четырехугольника, периметр и площадь " << 1 << ": ";
        mas[i].show();

        cout << "Четырехугольник прямоугольник? " << mas[i].is_prug() << endl;
        cout << "Четырехугольник квадрат? " << mas[i].is_square() << endl;
        cout << "Четырехугольник ромб? " << mas[i].is_romb() << endl;

        cout << "Можно ли вписать в четырехугольник окружность? " << mas[i].is_out_circle() << endl;
        cout << "Можно ли описать около четырехугольника окружность? " << mas[i].is_in_circle() << endl;

    }

}