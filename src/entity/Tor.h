//
// Created by Ivan on 14.02.22.
//

#ifndef LAB_12_TOR_H
#define LAB_12_TOR_H
#include "Shape3d.h"
#include "Annulus.h"

class Tor: public Annulus, public Shape3d{
private:
    double volume_;
    double square_;
public:
    Tor( const Point& x, double R, double r): Annulus(x,R,r){
    volume_ = 2*M_PI*M_PI*radius2_*radius_;
    square_ = 4*M_PI*M_PI*radius_*radius2_;
}
    double volume() override;
    double square() override;
    virtual std::string ParameterToString() override;
    virtual std::string ValuesToString() override;

};


#endif //LAB_12_TOR_H
