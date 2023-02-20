#include "Figure.h"
#include <iostream>
using namespace std;

int main() {
    Figure mas[8];

    float x1, x2, x3, x4;
    float y1, y2, y3, y4;

    for (int i = 1; i < 8; i++) {
        setlocale(LC_ALL, "");
        cout << "¬ведите координаты дл€ 1 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x1 >> y1;

        cout << "¬ведите координаты дл€ 2 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x2 >> y2;

        cout << "¬ведите координаты дл€ 3 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x3 >> y3;

        cout << "¬ведите координаты дл€ 4 точки " << i + 1 << " четырехугольника:" << endl;
        cin >> x4 >> y4;

        mas[i].figure(x1, y1, x2, y2, x3, y3, x4, y4);

    }

}