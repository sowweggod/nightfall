#pragma once

class Figure {
	float x1, x2, x3, x4;

	float y1, y2, y3, y4;

	float S;

	float P;
	
	float a, b, c, d, d1, d2, cos, sin;

public:
	void figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);

	void sinus();

	void show();

	bool is_prug();

	bool is_square();

	bool is_romb();

	bool is_in_circle();

	bool is_out_circle();

};

int main();
