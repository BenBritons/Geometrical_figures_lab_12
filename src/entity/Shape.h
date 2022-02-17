//
// Created by Ivan on 11.02.22.
//

#ifndef LAB_12_SHAPE_H
#define LAB_12_SHAPE_H
#include <string>


class Shape {
private:
    static int ID;
    int id;
public:
    virtual std::string ParameterToString() = 0;
    virtual std::string ValuesToString() = 0;
    Shape(){
        id = get_id();
    }
    virtual double square() = 0;
    static int get_ID(){
        return ++ID;
    }
    int get_id() const{
        return id;
    }



};


#endif //LAB_12_SHAPE_H
