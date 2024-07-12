cmake_minimum_required(VERSION 3.10.0)
project(ShooterGame)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_executable(ShooterGame 
               main.cpp
               src/AudioManager.cpp)
target_link_libraries(ShooterGame IrrKlang)