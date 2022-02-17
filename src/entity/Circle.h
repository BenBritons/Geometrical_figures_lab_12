//
// Created by Ivan on 14.02.22.
//

#ifndef LAB_12_CIRCLE_H
#define LAB_12_CIRCLE_H
#include "Shape2d.h"
#include <cmath>
#include "Point.h"

class Circle:public Shape2d {
private:
    double square_;
    double perimeter_;
protected:
    double radius_;
    Point centre_;
public:
    Circle():Shape(), centre_(0, 0), radius_(0){
        square_ = radius_*radius_*M_PI;
        perimeter_ = 2*radius_*M_PI;
    };
    Circle(const Point& centre, double radius):Shape(), centre_(centre), radius_(radius){
        square_ = radius_*radius_*M_PI;
        perimeter_ = 2*radius_*M_PI;
    };
    double square() override ;
    double perimeter() override ;
    double valume() override {
        return 0;
    };

    std::string ParameterToString()override;
    std::string ValuesToString() override;
    virtual std::ostream& doprint(std::ostream& out, Shape &tmp) override{
        out << get_id() << " Circle x:" << centre_.GetX() << " y: " << centre_.GetY()
            <<" Radius: " << radius_
            << " Square: " << square_ << " Perimeter: " << perimeter_;
        return out;
    }
};

/*std::ostream& operator<<(std::ostream& out, const Circle &tmp){
    out << tmp.get_id() << " Circle x:" << tmp.centre_.GetX() << " y: " << tmp.centre_.GetY()
    <<" Radius: " << tmp.radius_
    << " Square: " << tmp.square_ << " Perimeter: " << tmp.perimeter_;
    return out;
}*/

#endif //LAB_12_CIRCLE_H
