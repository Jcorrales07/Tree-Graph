cmake_minimum_required(VERSION 3.23)
project(treeGraph)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        treeGraph
        main.cpp
        Object.cpp
        Object.h
        Nodo.cpp
        Nodo.h
        TDAArbol.cpp
        TDAArbol.h
        )
