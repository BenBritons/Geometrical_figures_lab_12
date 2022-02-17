//
// Created by Ivan on 15.02.22.
//

#ifndef LAB_12_ABSTRACTREADERWRITER_H
#define LAB_12_ABSTRACTREADERWRITER_H
#include <string>
#include "../entity/Shape.h"
#include <list>


class AbstractReaderWriter {
public:
    virtual void FileWrite(std::string &path, std::list<Shape*>& colection) = 0;
    virtual void FileRead(std::string &path, std::list<Shape*> & collection, std::string& sorted_value) = 0;
};


#endif //LAB_12_ABSTRACTREADERWRITER_H
