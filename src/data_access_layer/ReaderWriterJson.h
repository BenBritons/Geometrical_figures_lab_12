//
// Created by Ivan on 15.02.22.
//

#ifndef LAB_12_READERWRITERJSON_H
#define LAB_12_READERWRITERJSON_H
#include "AbstractReaderWriter.h"
#include "nlohmann/json.hpp"

class ReaderWriterJson: public AbstractReaderWriter{
public:
     void FileRead(std::string &path, std::list<Shape*> & collection, std::string& sorted_value) override;
     void FileWrite(std::string &path, std::list<Shape*>& colection) override;
};


#endif //LAB_12_READERWRITERJSON_H
