#include <iostream>
#include <cmath>
#include "Object3D.h"

using namespace std;

double Sphere::volume() const {
    double v;
    v = (double) 4 * M_PI * radius * radius * radius/ 3;
    return v;
}

double Cylinder::volume() const {
    return radius * radius * height * M_PI;
}

double RectPrism::volume() const {
    return width * length * height;
}
