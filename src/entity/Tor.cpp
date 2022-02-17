//
// Created by Ivan on 14.02.22.
//

#include "Tor.h"

double Tor::volume() {
    return volume_;
}

double Tor::square() {
    return square_;
}

std::string Tor::ValuesToString() {
    std::string a = "Square: " + std::to_string(square_) + " volume: " + std::to_string(volume_);
    return a;
}

std::string Tor::ParameterToString() {
    std::string a = "Point x: " + std::to_string(centre_.GetX()) + " y: " + std::to_string(centre_.GetY())
            +" z: " + std::to_string(centre_.GetZ()) + " Radius: " + std::to_string(radius_)
            + " Radius2: " + std::to_string(radius2_);
    return a;
}
