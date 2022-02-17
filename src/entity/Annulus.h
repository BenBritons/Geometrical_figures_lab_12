//
// Created by Ivan on 14.02.22.
//

#ifndef LAB_12_ANNULUS_H
#define LAB_12_ANNULUS_H
#include "Circle.h"
#include <cmath>
#define _USE_MATH_DEFINES


//ring
class Annulus :public Circle{
private:
    double square_;
    double perimeter_;
protected:
    double radius2_;
public:
    Annulus(const Point& centre, double radius1, double radius2): Circle(centre, radius1), radius2_(radius2){
        square_ = M_PI*radius_*radius_ - M_PI*radius2_*radius2_;
        perimeter_ =  2*M_PI*(radius_ + radius2_);
    }
    double square() override;
    double perimeter() override;
    virtual std::string ParameterToString() override;
    virtual std::string ValuesToString() override;
    friend std::ostream& operator<<(std::ostream& out, const Annulus &tmp){
        out << tmp.get_id() << " Annulus x:" << tmp.centre_.GetX() << " y: " << tmp.centre_.GetY()
            <<" Radius: " << tmp.radius_ << " Radius2: " << tmp.radius2_
            << " Square: " << tmp.square_ << " Perimeter: " << tmp.perimeter_;
        return out;
    }
};

/*std::ostream& operator<<(std::ostream& out, const Annulus &tmp){
    out << tmp.get_id() << " Annulus x:" << tmp.centre_.GetX() << " y: " << tmp.centre_.GetY()
        <<" Radius: " << tmp.radius_ << " Radius2: " << tmp.radius2_
        << " Square: " << tmp.square_ << " Perimeter: " << tmp.perimeter_;
    return out;
}*/


#endif //LAB_12_ANNULUS_H
