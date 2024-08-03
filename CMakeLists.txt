cmake_minimum_required(VERSION 3.10.0)
project(ShooterGame)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(gtest/googletest-03597a01ee50ed33e9dfd640b249b4be3799d395)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/test)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)

# add_executable(ShooterGame 
#                main.cpp
#                src/AudioManager.cpp
#                src/Objects.cpp
#                src/ScreenHandler.cpp)
# target_link_libraries(ShooterGame IrrKlang)

# enable_testing()

add_library(ShooterGame
              main.cpp
               src/AudioManager.cpp
               src/Objects.cpp
               src/ScreenHandler.cpp
)
add_executable(
  TestMain
  test/TestMain.cpp
)
add_executable(TestAudioManager
test/TestAudioManager.cpp
)
target_link_libraries(
  TestMain
  GTest::gtest_main
  ShooterGame
  IrrKlang
)
target_link_libraries(
  TestAudioManager
  GTest::gtest_main
  ShooterGame
  IrrKlang
)

include(GoogleTest)
gtest_discover_tests(TestMain)