//
// Created by Ivan on 11.02.22.
//

#ifndef LAB_12_SHAPE_H
#define LAB_12_SHAPE_H
#include <string>
#include <iostream>


class Shape {
private:
    static int ID;
    int id;
    virtual std::ostream& doprint(std::ostream& out, Shape &shape){
        out << "!!Abstract class!!";
        return out;
    };

public:
    virtual std::string ParameterToString() = 0;
    virtual std::string ValuesToString() = 0;

    Shape(){
        id = get_ID();
    }
    virtual double square() = 0;
     int get_ID(){
        return ++id;
    }
    int get_id() const{
        return id;
    }

    friend  std::ostream& operator<< (std::ostream &out, Shape& shape){
        return shape.doprint(out, shape);
    }
};
/*std::ostream& operator<< (std::ostream &out, const Shape &shape){
    out << "!!Abstract class!!";
    return out;
}*/


#endif //LAB_12_SHAPE_H
