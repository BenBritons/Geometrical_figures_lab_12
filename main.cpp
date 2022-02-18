#include <iostream>
#include "src/entity/Tor.h"
#include "src/entity/Sorter.h"
#include "src/data_access_layer/ReaderWriterTxt.h"
#include "src/data_access_layer/ReaderWriterJson.h"
#include "spdlog/spdlog.h"

int main() {

   /* spdlog::info("Welcome to spdlog!");
    spdlog::error("Some error message with arg: {}", 1);

    spdlog::warn("Easy padding in numbers like {:08d}", 12);
    spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
    spdlog::info("Support for floats {:03.2f}", 1.23456);
    spdlog::info("Positional args are {1} {0}..", "too", "supported");
    spdlog::info("{:<30}", "left aligned");

    spdlog::set_level(spdlog::level::debug); // Set global log level to debug
    spdlog::debug("This message should be displayed..");
*/
    // change log pattern
   // spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");

    // Compile time log levels
    // define SPDLOG_ACTIVE_LEVEL to desired level
   /* SPDLOG_TRACE("Some trace message with param {}", 42);
    SPDLOG_DEBUG("Some debug message");
*/
    spdlog::set_level(spdlog::level::debug); // Set global log level to debug

    std::list<Shape*> a;
    std::string sort;
    Sorter srt;
    ReaderWriterTxt b;
    std::string inpath = "../tests/test.txt";
    std::string oupath = "../tests/testsout.txt";
    std::string sorted_value;//Reading from file
    b.FileRead(inpath, a, sorted_value);
    a = srt(a,sorted_value);
    b.FileWrite(oupath,a);
    return 0;
}
