//
// Created by Ivan on 14.02.22.
//

#ifndef LAB_12_POINT_H
#define LAB_12_POINT_H


class Point {
private:
    double x_;
    double y_;
    double z_;
public:
    Point(double xvalue = 0, double yvalue = 0, double zvalue = 0);
    Point(const Point& point);
    void Print(); //TODO добавить поток для вывода <<
    double GetX();
    double GetY();
    double GetZ();

    void setX(double x);

    void setY(double y);

    void setZ(double z);
};


#endif //LAB_12_POINT_H
