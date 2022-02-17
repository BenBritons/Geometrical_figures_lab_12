//
// Created by Ivan on 14.02.22.
//

#include "Annulus.h"

double Annulus::square() {

    return square_ ;
}

double Annulus::perimeter() {

    return perimeter_;
}

std::string Annulus::ValuesToString() {
    return (Circle::ValuesToString() + " radius 2: " + std::to_string(radius2_));
}

std::string Annulus::ParameterToString() {
    std::string a = "Square: " + std::to_string(square_) + " perimeter: " + std::to_string(perimeter_);
    return a;
}
