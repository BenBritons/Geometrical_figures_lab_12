//
// Created by Ivan on 16.02.22.
//

#ifndef LAB_12_SORTER_H
#define LAB_12_SORTER_H
#include "Tor.h"
#include <list>
#include <string>
#include "spdlog/spdlog.h"

class Sorter {
public:
    std::list<Shape*> operator()(std::list<Shape*>& colection, std::string& sorted_value) {
        std::list<Shape *> list_for_sort;


        if (sorted_value == "square") {
            for (auto tmp: colection) {
                    list_for_sort.push_back(tmp);
            }
            list_for_sort.sort([](Shape* lhs, Shape* rhs)->bool {return lhs->square() > rhs->square();});
        } else if (sorted_value == "perimeter") {
            std::list<Shape2d *> list_for_sort_2d;

            for (auto tmp: colection) {
                if (dynamic_cast<Shape2d*>(tmp) != nullptr && dynamic_cast<Shape3d*>(tmp) == nullptr) {
                    list_for_sort_2d.push_back(dynamic_cast<Shape2d*>(tmp));
                }
            }
            list_for_sort_2d.sort([](Shape2d* lhs, Shape2d* rhs)->bool {return lhs->perimeter() > rhs->perimeter();});
            for (auto tmp: list_for_sort_2d) {
                list_for_sort.push_back(tmp);
                spdlog::info("Support for floats {:03.2f}", 1.23456);
                spdlog::info("Positional args are {1} {0}..", "too", "supported");
                spdlog::info("Collection item  =  {0}", tmp->ParameterToString());
            //    std::cout << *tmp << "\n";
            }
        } else if (sorted_value == "volume") {
            std::list<Shape3d *> list_for_sort_3d;
            for (auto tmp: colection) {
                if (dynamic_cast<Shape3d*>(tmp) != nullptr) {
                    list_for_sort_3d.push_back(dynamic_cast<Shape3d*>(tmp));
                }
            }
            list_for_sort_3d.sort([](Shape3d* lhs, Shape3d* rhs)->bool {return lhs->volume() > rhs->volume();});
            for (auto tmp: list_for_sort_3d) {
                list_for_sort.push_back(tmp);
                std::cout << *tmp << "\n";
            }
        }

        return list_for_sort;
    }
};


#endif //LAB_12_SORTER_H
