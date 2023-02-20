#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
	Circle mas[3];
	float radius;
	float x_center;
	float y_center;

	for (int i = 0; i < 3; i++) {
		setlocale(LC_ALL, "");
		cout << "Введите радиус " << i + 1 << " окружности" << endl;
		cin >> radius;

		cout << "Введите координату X для " << i + 1 << " окружности" << endl;
		cin >> x_center;

		cout << "Введите координату Y для " << i + 1 << " окружности" << endl;
		cin >> y_center;

		mas[i].set_circle(radius, x_center, y_center);
	}

	for (int i = 0; i < 3; i++) {
		setlocale(LC_ALL, "");
		cout << "Площадь круга " << i + 1 << ": " << mas[i].square() << endl;
		cout << "Можно ли описать треугольник у " << i + 1 << " окружности? " << mas[i].triangle_around(radius, x_center, y_center) << endl;
		cout << "Можно ли вписать треугольник в " << i + 1 << " окружность? " << mas[i].triangle_in(radius, x_center, y_center) << endl;

	}
	float r2, x2, y2;
	cout << "Напишите радиус, x и y центра окружности которую хотите проверить на пересечение: " << endl;
	cin >> r2 >> x2 >> y2;
	for (int i = 0; i < 3; i++) {
		cout << "Имеются ли точки пересечения? " << mas[i].check_circle(r2, x2, y2) << endl;
	}
}