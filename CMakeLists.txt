cmake_minimum_required(VERSION 3.15)

project(AIvatar)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set (CMAKE_CXX_STANDARD 20)

# include_directories(include)
add_executable(aivatar main.cpp include/map.cpp include/map.h include/enums.h include/region_declaration.cpp)

# target_include_directories(aivatar PUBLIC include/)
# set(SOURCES main.cpp include/map.cpp include/map.h include/enums.h )
