#include <iostream>
#include "src/entity/Tor.h"
#include "src/entity/Sorter.h"
#include "src/data_access_layer/ReaderWriterTxt.h"
#include "src/data_access_layer/ReaderWriterJson.h"

int main() {
    std::list<Shape*> a;
    std::string sort;
    Sorter srt;
    ReaderWriterJson b;
    std::string inpath = "../tests/tests.json";
    std::string oupath = "../tests/testsout.json";
    std::string sorted_value;
    b.FileRead(inpath, a, sorted_value);
    a = srt(a,sorted_value);
    b.FileWrite(oupath,a);
    return 0;
}
