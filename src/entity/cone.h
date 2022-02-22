//
// Created by Savin Dmitry on 22.02.2022.
//

#ifndef CONE_H
#define CONE_H

#include "Circle.h"
#include "Shape3d.h"

class Cone : public Shape3d, public Circle {
 public:
  Cone();

  Cone(Point o, double r, double h);

  double volume() override;

  double square() override;

  std::ostream& doprint(std::ostream& out, Shape& tmp) override {
    out << get_id() << " Circle x:" << centre_.GetX() << " y: "
        << centre_.GetY()
        << " Radius: " << radius_ << " Height: " << height_
        << " Square: " << square() << " Perimeter: " << perimeter();
    return out;
  }

  std::string ParameterToString() override {
    std::string a = "Point x: " + std::to_string(centre_.GetX()) + " y: " + std::to_string(centre_.GetY())
        + " Radius: " + std::to_string(radius_) + " Height: " + std::to_string(height_);
    return a;
  }

  std::string ValuesToString() override {
    std::string a = "Volume: " + std::to_string(volume()) + " square: " + std::to_string(square());
    return a;
  }

 private:
  double height_;
};

#endif //CONE_H
