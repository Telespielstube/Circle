#include <iostream>
#include "circle.h"

using namespace std;

struct circle inputValue() {
    struct circle circle;

    cin >> circle.radius;
    cin >> circle.heigh;
    return circle;
}
