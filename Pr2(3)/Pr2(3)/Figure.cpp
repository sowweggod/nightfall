#include "Figure.h"
#include <cmath>
#include <iostream>
using namespace std;


void Figure::figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
    a = ((sqrt((pow((x1 - x4), 2) + pow((y1 - y4), 2)))));
    b = ((sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)))));
    c = ((sqrt((pow((x2 - x3), 2) + pow((y2 - y3), 2)))));
    d = ((sqrt((pow((x3 - x4), 2) + pow((y3 - y4), 2)))));
    d1 = ((sqrt((pow((x1 - x3), 2) + pow((y1 - y3), 2)))));
    d2 = ((sqrt((pow((x2 - x4), 2) + pow((y2 - y4), 2)))));
    cos = (a * b) / (abs(a) * abs(b));
    sin = (abs(a) * abs(b)) * cos;
    S = (d1 * d2 * sin) / 2;
    P = a + b + c + d;
    
}

void Figure::show()
{
    cout << a << " " << b << " " << c << " " << d << endl;
    cout << P << " " << S;
}

bool Figure::is_prug()
{
   return ((a == c) && (b == d) && (d1 == d2));
}

bool Figure::is_square()
{
    return ((a == b) && (b == c) && (c == d) && (d1 == d2));
}

bool Figure::is_romb()
{
    return ((a == b) && (b == c) && (c == d));
}

bool Figure::is_in_circle()
{
    float P1 = (a + b + c + d) / 2;
    float S1 = sqrt((P1 - a) * (P1 - d) * (P1 - c) * (P1 - d));
    return (S1 == S);
}

bool Figure::is_out_circle()
{
    return (a + b == c + d);
}
