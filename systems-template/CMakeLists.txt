cmake_minimum_required(VERSION 3.16)
project(prog C)          # declare the language

set(CMAKE_C_STANDARD 99)

# This check was wrong syntax; use NOT, and check the system properly.
if (NOT CMAKE_SYSTEM_NAME STREQUAL "Linux")
  message(FATAL_ERROR "Linux is required to successfully execute the required syscalls for CS3411 assignments")
endif()

# Prefer an option() so it's obvious and type-safe
option(TEST "Build test flavor" OFF)

set(SOURCE src/example_compilation_unit.c)

if (TEST)  # option() gives a proper boolean
  add_executable(prog test/rktest.c ${SOURCE})
else()
  add_executable(prog src/main.c ${SOURCE})
endif()


if (TEST)
  target_link_libraries(prog PRIVATE m)
endif()

target_include_directories(prog PUBLIC test src)
