cmake_minimum_required(VERSION 3.1)

project(HelloWorld VERSION 0.1.0)

set(SFML_DIR ${CMAKE_CURRENT_LIST_DIR}/../../SFML-2.5.1/lib/cmake/SFML)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
add_executable(HelloWorld main.cpp)
target_link_libraries(HelloWorld sfml-graphics sfml-audio)

include_directories(${CMAKE_CURRENT_LIST_DIR}/../../SFML-2.5.1/include)

