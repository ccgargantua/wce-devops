cmake_minimum_required(VERSION 3.16)
set(CMAKE_C_STANDARD 99)

project(prog)

if (!LINUX)
    message(FATAL_ERROR "Linux is required to successfully execute \
                         the required syscalls for CS3411 assignments")
endif()

if(DEFINED TEST)
    set(MAIN_C test/rktest.c)
else()
    set(MAIN_C src/main.c)
endif()

add_executable(prog ${MAIN_C})

if(DEFINED TEST)
    target_link_libraries(prog m)
endif()

target_include_directories(prog PUBLIC test src
)
