#include "Cylinder.h"

double Cylinder::volume() {
    return volume_;
}

double Cylinder::square() {
    return square_;
}

std::string Cylinder::ValuesToString() {
    std::string a = "Square: " + std::to_string(square_) + " volume: " + std::to_string(volume_);
    return a;
}

std::string Cylinder::ParameterToString() {
    std::string a = "Point x: " + std::to_string(centre_.GetX()) + " y: " + std::to_string(centre_.GetY())
        + " z: " + std::to_string(centre_.GetZ()) + " Radius: " + std::to_string(radius_)
        + " Height: " + std::to_string(height_);
    return a;
}
