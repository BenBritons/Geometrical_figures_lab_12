//
// Created by Savin Dmitry on 22.02.2022.
//

#include "cone.h"

Cone::Cone() : Shape3d(), Circle(), height_(0) {
}

Cone::Cone(Point o, double r, double h) : Shape3d(), Circle(o, r), height_(h) {
}

double Cone::volume() {
  return Circle::square() * height_ / 3;
}

double Cone::square() {
  double l = sqrt(radius_ * radius_ + height_ * height_);
  return Circle::square() + M_PI * radius_ * l;
}