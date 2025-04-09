cmake_minimum_required(VERSION 3.14)
project(BacktestEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include headers
include_directories(include)

# Source files
file(GLOB SRC_FILES
    src/*.cpp
)

add_executable(BacktestEngine ${SRC_FILES})