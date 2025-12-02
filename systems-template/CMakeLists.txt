cmake_minimum_required(VERSION 3.16)
project(program C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

include(CheckCCompilerFlag)

option(build_tests "Build tests" OFF)

if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

set(PROJECT_OBJ
    src/example_compilation_unit.c
)

if (build_tests)
    add_executable(test
        tests/example_compilation_unit_tests.c
        ${PROJECT_OBJ}
    )
    target_link_libraries(test PRIVATE rktest)
else()
    add_executable(program src/main.c ${PROJECT_OBJ})
    target_link_libraries(program PRIVATE rktest)
endif()
