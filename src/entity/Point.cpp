//
// Created by Ivan on 14.02.22.
//

#include "Point.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


Point::Point(const Point &point) {
    x_ = point.x_;
    y_ = point.y_;
    z_ = point.z_;
}
void Point::Print() {
    cout << "(" << x_ << ";" << y_ << ")" << endl;
}

double Point::GetX() {
    return x_;
}
double Point::GetY() {
    return y_;
}
double Point::GetZ() {
    return z_;
}

Point::Point(double xvalue, double yvalue, double zvalue):x_(xvalue), y_(yvalue), z_(zvalue){}

void Point::setX(double x) {
    x_ = x;
}

void Point::setY(double y) {
    y_ = y;
}

void Point::setZ(double z) {
    z_ = z;
}
