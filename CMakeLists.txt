cmake_minimum_required(VERSION 3.10)
project(csim VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(csim
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/simulation.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/pin.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/circuit.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/and_gate.cpp
)
target_include_directories(csim PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)