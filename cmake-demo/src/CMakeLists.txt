cmake_minimum_required(VERSION 3.0.0)
project(Factorial VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(modules)
add_executable(Factorial main.cpp)

target_link_libraries (Factorial PUBLIC calculations)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)
