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
		cout << "¬ведите радиус " << i + 1 << " окружности" << endl;
		cin >> radius;

		cout << "¬ведите координату X дл€ " << i + 1 << " окружности" << endl;
		cin >> x_center;

		cout << "¬ведите координату Y дл€ " << i + 1 << " окружности" << endl;
		cin >> y_center;

		mas[i].set_circle(radius, x_center, y_center);
	}

	for (int i = 0; i < 3; i++) {
		setlocale(LC_ALL, "");
		cout << "ѕлощадь круга " << i + 1 << ": " << mas[i].square() << endl;

	}

}