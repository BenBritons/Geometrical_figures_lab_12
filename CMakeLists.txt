cmake_minimum_required(VERSION 3.20)
project(lab_12)

set(CMAKE_CXX_STANDARD 14)

include_directories("lib/json-develop/include")
add_executable(lab_12 main.cpp src/entity/Shape.cpp src/entity/Shape.h src/entity/Shape2d.cpp src/entity/Shape2d.h src/Enum.cpp src/Enum.h src/entity/Shape3d.cpp src/entity/Shape3d.h
        src/entity/Point.cpp src/entity/Point.h src/entity/Circle.cpp src/entity/Circle.h src/entity/Annulus.cpp src/entity/Annulus.h src/entity/Tor.cpp src/entity/Tor.h
        src/data_access_layer/AbstractReaderWriter.h src/data_access_layer/ReaderWriterTxt.cpp src/data_access_layer/ReaderWriterTxt.h src/data_access_layer/ReaderWriterJson.cpp
        src/data_access_layer/ReaderWriterJson.h src/entity/Sorter.h)
