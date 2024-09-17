cmake_minimum_required(VERSION 3.28)
project(doublelinkedlist)

set(CMAKE_CXX_STANDARD 17)

add_executable(doublelinkedlist main.cpp
        Node.cpp
        LinkedList.cpp)
