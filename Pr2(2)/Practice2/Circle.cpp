#include "Circle.h"
#include <cmath>

void Circle::circle(float r, float x, float y)
{
}

void Circle::set_circle(float r, float x, float y)
{
	r = radius;

	x = x_center;

	y = y_center;
}

float Circle::square()
{
	return pow(radius, 2) * 3.14;
}

bool Circle::triangle_around(float a, float b, float c)
{
	return true;
}

bool Circle::triangle_in(float a, float b, float c)
{
	return true;
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr)
{
	return ((sqrt((pow((x_cntr - x_center) + (y_cntr - y_center), 2)))) < (r + radius));
};

