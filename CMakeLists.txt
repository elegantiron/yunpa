cmake_minimum_required(VERSION 4.2.1)
set(BUILD_SHARED_LIBS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/package)
project(YoungPastry)

include(cmake/deps.cmake)
set(LIBYUNPA_BUILD_DOCS ON)
add_subdirectory(libyunpa)
add_subdirectory(YoungPastry)