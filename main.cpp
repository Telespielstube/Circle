#include <iostream>
#include "circle.h"
#include "input.h"
#include "calc.h"

using namespace std;

int main()
{
    struct circle circle1;
    double diameter;
    const double PI = 3.14;

    circle1 = inputValue();
    diameter = diameterCircle(circle1, PI);


    return 0;
}
