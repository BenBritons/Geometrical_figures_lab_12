//
// Created by Ivan on 16.02.22.
//

#ifndef LAB_12_SORTER_H
#define LAB_12_SORTER_H
#include "Tor.h"
#include <list>
#include <string>

class Sorter {
public:
    std::list<Shape*> operator()(std::list<Shape*>& colection, std::string& sorted_value) {
        std::list<Shape *> list_for_sort;


        if (sorted_value == "square") {
            for (auto tmp: colection) {
                if (dynamic_cast<Circle *>(tmp) != nullptr ||
                    dynamic_cast<Annulus *>(tmp) != nullptr ||
                    dynamic_cast<Tor *>(tmp) != nullptr) {
                    list_for_sort.push_back(tmp);
                }
            }
            list_for_sort.sort([](Shape* lhs, Shape* rhs)->bool {return lhs->square() > rhs->square();});
        } else if (sorted_value == "perimeter") {
            for (auto tmp: colection) {
                if (dynamic_cast<Circle *>(tmp) != nullptr ||
                    dynamic_cast<Annulus *>(tmp) != nullptr) {
                    list_for_sort.push_back(tmp);
                }
            }
            list_for_sort.sort([](Shape* lhs, Shape* rhs)->bool {return lhs->perimeter() > rhs->perimeter();});
        } else if (sorted_value == "valume") {
            for (auto tmp: colection) {
                if (dynamic_cast<Tor *>(tmp) != nullptr) {
                    list_for_sort.push_back(tmp);
                }
            }
            list_for_sort.sort([](Shape* lhs, Shape* rhs)->bool {return lhs->valume() > rhs->valume();});
        }

        return list_for_sort;
    }
};


#endif //LAB_12_SORTER_H
