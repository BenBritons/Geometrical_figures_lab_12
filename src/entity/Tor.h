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
    virtual std::ostream& doprint(std::ostream& out, Shape &tmp) override{
        out << tmp.get_id() << " Tor x:" << centre_.GetX() << " y: " << centre_.GetY() << " z: " << centre_.GetZ()
            <<" Radius: " << radius_ << " Radius2: " << radius2_
            << " Square: " << square_ << " Volume: " << volume_;
        return out;
    }
};

/*std::ostream& operator<<(std::ostream& out, const Tor &tmp){
    out << tmp.get_id() << " Tor x:" << tmp.centre_.GetX() << " y: " << tmp.centre_.GetY() << " z: " << tmp.centre_.GetZ()
        <<" Radius: " << tmp.radius_ << " Radius2: " << tmp.radius2_
        << " Square: " << tmp.square_ << " Volume: " << tmp.volume_;
    return out;
}*/

#endif //LAB_12_TOR_H
