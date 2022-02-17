//
// Created by Ivan on 14.02.22.
//

#include "Circle.h"
#define _USE_MATH_DEFINES

double Circle::square() {
    return square_;
}
double Circle::perimeter() {
    return perimeter_;
}

std::string Circle::ParameterToString() {
    std::string a = "Point x: " + std::to_string(centre_.GetX()) + " y: " + std::to_string(centre_.GetY())
            + " Radius: " + std::to_string(radius_);
    return a;
}

std::string Circle::ValuesToString() {
    std::string a = "Perimeter: " + std::to_string(perimeter_) + " square: " + std::to_string(square_);
    return a;
}
