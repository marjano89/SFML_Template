cmake_minimum_required(VERSION 3.1)

project(HelloWorld VERSION 0.1.0)


if(NOT DEFINED ENV{SFML_PATH})
    message( FATAL_ERROR "SFML_PATH variable not set!" )
else()
    set(SFML_PATH $ENV{SFML_PATH})
    
    set(SFML_DIR ${SFML_PATH}/lib/cmake/SFML)

    include_directories(${SFML_PATH}/include)

    find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
    add_executable(HelloWorld main.cpp)
    target_link_libraries(HelloWorld sfml-graphics sfml-audio)

endif()




