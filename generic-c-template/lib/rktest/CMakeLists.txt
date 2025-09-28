add_library(rktest rktest.c rktest.h)

target_include_directories(rktest
  PUBLIC
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/lib>
    $<INSTALL_INTERFACE:include>
)
if(UNIX)
  target_link_libraries(rktest PUBLIC m)
endif()