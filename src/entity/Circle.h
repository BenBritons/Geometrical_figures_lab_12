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
    Point centre_;
    double radius_;
public:
    Circle():Shape(), centre_(0, 0), radius_(0){
        square_ = radius_*radius_*M_PI;
        perimeter_ = 2*radius_*M_PI;
    };
    Circle(const Point& centre, double radius):Shape(), centre_(centre), radius_(radius){
        square_ = radius_*radius_*M_PI;
        perimeter_ = 2*radius_*M_PI;
    };
    virtual double square() override ;
    virtual double perimeter() override ;

    virtual std::string ParameterToString()override;
    virtual std::string ValuesToString() override;
};


#endif //LAB_12_CIRCLE_H
