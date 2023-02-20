#include "Figure.h"
#include <cmath>
#include <iostream>
using namespace std;


void Figure::figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
    float a = ((sqrt((pow((x1 - x4), 2) + pow((y1 - y4), 2)))));
    float b = ((sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)))));
    float c = ((sqrt((pow((x2 - x3), 2) + pow((y2 - y3), 2)))));
    float d = ((sqrt((pow((x3 - x4), 2) + pow((y3 - y4), 2)))));
    float d1 = ((sqrt((pow((x1 - x3), 2) + pow((y1 - y3), 2)))));
    float d2 = ((sqrt((pow((x2 - x4), 2) + pow((y2 - y4), 2)))));
    float cos = (a * b) / (abs(a) * abs(b));
    float sin = (abs(a) * abs(b)) * cos;
    float S = (d1 * d2 * sin) / 2;
    float P = a + b + c + d;
}

void Figure::show()
{
    
}

bool Figure::is_prug()
{
   return true;
}

bool Figure::is_square()
{
    return false;
}

bool Figure::is_romb()
{
    return false;
}

bool Figure::is_in_circle()
{
    return false;
}

bool Figure::is_out_circle()
{
    return (false);
}
