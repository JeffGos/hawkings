cmake_minimum_required(VERSION 3.7)
project(hawkings VERSION 0.0.0)
set (HAWKINGS_VERSION_MAJOR 1)
set (HAWKINGS_VERSION_MINOR 0)

# include(CMakeToolsHelpers)
include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 14)

include("${PROJECT_SOURCE_DIR}/sources.cmake")

add_executable(hawkings 
    
    ${PROJECT_SOURCE_DIR}/src/main.cc
    ${SOURCES}
)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
