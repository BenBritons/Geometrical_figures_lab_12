//
// Created by Ivan on 11.02.22.
//

#ifndef LAB_12_SHAPE_H
#define LAB_12_SHAPE_H


class Shape {
private:
    static int ID;
    int id;
public:
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
