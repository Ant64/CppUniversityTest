cmake_minimum_required(VERSION 3.4)

project(Wagony)

#specify set of project's source files
set(SOURCE_FILES
        include/pociag.h
        include/ladunek.h
        include/wagon.h
        include/odkryty.h
        include/kryty.h
        include/chlodnia.h
        include/platforma.h
        include/cysterna.h

        src/pociag.cpp
        src/ladunek.cpp
        src/wagon.cpp
        src/odkryty.cpp
        src/kryty.cpp
        src/chlodnia.cpp
        src/platforma.cpp
        src/cysterna.cpp

        src/main.cpp
        )
#add following files to executable file 'Wagony'
add_executable(Wagony ${SOURCE_FILES})

#add header files from 'include' directory of main project
target_include_directories(Wagony PUBLIC include)
