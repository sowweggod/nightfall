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
		cout << "������� ������ " << i + 1 << " ����������" << endl;
		cin >> radius;

		cout << "������� ���������� X ��� " << i + 1 << " ����������" << endl;
		cin >> x_center;

		cout << "������� ���������� Y ��� " << i + 1 << " ����������" << endl;
		cin >> y_center;

		mas[i].set_circle(radius, x_center, y_center);
	}

	for (int i = 0; i < 3; i++) {
		setlocale(LC_ALL, "");
		cout << "������� ����� " << i + 1 << ": " << mas[i].square() << endl;

	}

}