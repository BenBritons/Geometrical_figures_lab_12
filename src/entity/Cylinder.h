#ifndef LAB_12_CYLINDER_H
#define LAB_12_CYLINDER_H
#include "Shape3d.h"
#include "Circle.h"


class Cylinder : public Shape3d,public Circle {
private:
    double volume_;
    double square_;
    double height_;
public:
    Cylinder(double x,double y, double z, double r, double h){
        centre_.setX(x);
        centre_.setY(y);
        centre_.setZ(z);
        volume_ = M_PI * r * r * h;
        square_ = 2 * M_PI * r * r + 2 * M_PI * r * h;
        height_ = h;
    }
    double volume() override;
    double square() override;
    virtual std::string ParameterToString() override;
    virtual std::string ValuesToString() override;

    virtual std::ostream& doprint(std::ostream& out, Shape& tmp) override {
        out << tmp.get_id() << " Tor x:" << centre_.GetX() << " y: " << centre_.GetY() << " z: " << centre_.GetZ()
            << " Radius: " << radius_ << " Height: " << height_
            << " Square: " << square_ << " Volume: " << volume_;
        return out;
    }
};



#endif //LAB_12_TOR_H
