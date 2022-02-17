//
// Created by Ivan on 15.02.22.
//

#ifndef LAB_12_READERWRITERTXT_H
#define LAB_12_READERWRITERTXT_H
#include "AbstractReaderWriter.h"


class ReaderWriterTxt: public AbstractReaderWriter{
    virtual void FileRead(std::string &path, std::list<Shape*> & collection, std::string& sorted_value);
    virtual void FileWrite(std::string &path, std::list<Shape*>& colection);
};


#endif //LAB_12_READERWRITERTXT_H
