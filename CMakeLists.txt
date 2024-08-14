cmake_minimum_required(VERSION 3.10.0)
project(ShooterGame)


# GoogleTest requires at least C++14

set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(gtest/googletest-03597a01ee50ed33e9dfd640b249b4be3799d395)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/test)
# link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib/gcc-32)

add_executable(ShooterGameEXE 
               main.cpp
               src/AudioManager.cpp
               src/Objects.cpp
               src/ScreenHandler.cpp)
target_link_libraries(ShooterGameEXE IrrKlang)

# enable_testing()

add_library(ShooterGame
              main.cpp
               src/AudioManager.cpp
               src/Objects.cpp
               src/ScreenHandler.cpp
               src/PlatformHelper.cc
)
target_link_libraries(ShooterGame
IrrKlang
)

add_executable(
  TestMain
  test/TestMain.cpp
)
target_link_libraries(
  TestMain
  GTest::gtest_main
  IrrKlang
  ShooterGame
)

add_executable(TestAudioManager
test/TestAudioManager.cpp
)

target_link_libraries(
  TestAudioManager
  GTest::gtest_main
  IrrKlang
  ShooterGame
  
)
add_executable(TestPlatformHelper
test/TestPlatformHelper.cpp
)
target_link_libraries(TestPlatformHelper
GTest::gtest_main
ShooterGame)

add_executable(TestObject
test/TestObject.cpp
)
target_link_libraries(TestObject 
GTest::gtest_main 
ShooterGame)

include(GoogleTest)
gtest_discover_tests(TestMain)