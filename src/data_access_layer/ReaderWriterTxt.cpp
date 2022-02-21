//
// Created by Ivan on 15.02.22.
//

#include "ReaderWriterTxt.h"
#include <fstream>
#include "../entity/Tor.h"
#include "../entity/Cylinder.h"
#include "../entity/Cylinder.cpp"




 void ReaderWriterTxt::FileRead(std::string &path, std::list<Shape *> &collection, std::string &sorted_value) {
    std::ifstream fin(path);
    std::string tmp_shape;
    std::string tmp_string;
    int size;
    std::string tmp_current_shape;

    double x;
    double y;
    double z;
    double R;
    double r;
    double h;


    fin >> size;
    fin >> sorted_value;
    for(int i = 0; i < size; ++i){
        fin >> tmp_current_shape;
        if (tmp_current_shape == "Circle"){
            fin >> x;
            fin >> y;
            fin >> R;
            collection.push_back( new Circle(Point(x, y), R) );
        } else if(tmp_current_shape == "Annulus"){
            fin >> x;
            fin >> y;
            fin >> R;
            fin >> r;
            collection.push_back( new Annulus(Point(x, y), R, r) );
        }
        else if(tmp_current_shape == "Tor"){
            fin >> x;
            fin >> y;
            fin >> z;
            fin >> R;
            fin >> r;
            collection.push_back( new Tor(Point(x, y, z), R, r) );
        }
        else if (tmp_current_shape == "Cylinder") {
            fin >> x;
            fin >> y;
            fin >> z;
            fin >> r;
            fin >> h;

            collection.push_back(new Cylinder(x,y,z, r, h));
        }
    }
}

void ReaderWriterTxt::FileWrite(std::string &path, std::list<Shape *> &colection) {
    std::ofstream fout(path);
    fout << colection.size() << "\n";
    for (auto tmp: colection) {
        fout << *tmp;
        fout << "\n";
    }
}
