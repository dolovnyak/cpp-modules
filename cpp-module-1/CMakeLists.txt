cmake_minimum_required(VERSION 3.17)
project(cpp_module_1)

set(CMAKE_CXX_STANDARD 98)


add_executable(ex00
        ex00/main.cpp
        ex00/Pony.cpp
        )

add_executable(ex01
        ex01/ex01.cpp
        )

add_executable(ex02
        ex02/main.cpp
        ex02/Zombie.cpp
        ex02/ZombieEvent.cpp
        )

add_executable(ex03
        ex03/main.cpp
        ex03/Zombie.cpp
        ex03/ZombieHorde.cpp
        )

add_executable(ex04
        ex04/ex04.cpp
        )

add_executable(ex05
        ex05/Brain.cpp
        ex05/Human.cpp
        ex05/main.cpp
        )

add_executable(ex06
        ex06/Weapon.cpp
        ex06/HumanA.cpp
        ex06/HumanB.cpp
        ex06/main.cpp
        )

add_executable(ex07
        ex07/main.cpp
        )

#set_target_properties(ex07
#        PROPERTIES
#        RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}"
#        )
