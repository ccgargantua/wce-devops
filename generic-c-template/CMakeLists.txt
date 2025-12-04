cmake_minimum_required(VERSION 3.16)
project(program C)

include(CheckCCompilerFlag)

option(build_tests "Build tests" OFF)

if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

add_subdirectory(lib)

set(PROJECT_OBJ
    src/vector.c
)

if (build_tests)
    add_executable(test
        tests/tests.c
        ${PROJECT_OBJ}
    )
    target_link_libraries(test PRIVATE rktest)
else()
    add_executable(program src/main.c ${PROJECT_OBJ})
    target_link_libraries(program PRIVATE rktest)
endif()
