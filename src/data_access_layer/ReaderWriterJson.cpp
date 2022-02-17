//
// Created by Ivan on 15.02.22.
//

#include "ReaderWriterJson.h"
#include "../entity/Tor.h"
#include <fstream>



void ReaderWriterJson::FileRead(std::string &path, std::list<Shape*> & collection, std::string& sorted_value) {
    std::ifstream fin(path, std::ifstream::binary);
    std::string tmp_shape;
    std::string tmp_string;
    std::string tmp_current_shape;
    nlohmann::json j{};

    double x;
    double y;
    double z;
    double R;
    double r;

    //std::getline(fin, tmp_shape);
    while(fin >> tmp_string){
        tmp_shape += tmp_string;
    }


    if(!(tmp_shape.empty())) {
        j = nlohmann::json::parse(tmp_shape);
        int size = j[0];
        sorted_value = j[1];
        for(int i = 2; i < size + 2; ++i) {
            tmp_current_shape = j[i]["ShapeType"];
            if (tmp_current_shape == "Circle") {
                    x = j[i]["Centre"][0];
                    y = j[i]["Centre"][1];
                    R = j[i]["R"];
                    collection.push_back( new Circle(Point(x, y), R) );
            }else
            if (tmp_current_shape == "Annulus") {
                x = j[i]["Centre"][0];
                y = j[i]["Centre"][1];
                R = j[i]["R"];
                r = j[i]["r"];
                collection.push_back( new Annulus(Point(x, y), R, r) );
            }else
            if (tmp_current_shape == "Tor") {
                x = j[i]["Centre"][0];
                y = j[i]["Centre"][1];
                z = j[i]["Centre"][2];
                R = j[i]["R"];
                r = j[i]["r"];
                collection.push_back( new Tor(Point(x, y, z), R, r) );
            }
        }
    }
}

void ReaderWriterJson::FileWrite(std::string &path, std::list<Shape*>& colection) {
    std::ofstream fout(path, std::ifstream::binary);
    nlohmann::json j{};
    int i = 1;
    j[0] = colection.size();
    for (auto tmp: colection) {
        j[i]["Identificator"] = tmp->get_id();
        j[i]["ShapeType"] = typeid(*tmp).name();
        j[i]["parameters"] = tmp->ParameterToString();
        j[i]["values"] = tmp->ValuesToString();
        i++;
    }
    fout << j;
}
