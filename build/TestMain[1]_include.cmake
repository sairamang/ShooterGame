if(EXISTS "C:/Users/Sai Raman G/Root/ShooterGame/build/TestMain[1]_tests.cmake")
  include("C:/Users/Sai Raman G/Root/ShooterGame/build/TestMain[1]_tests.cmake")
else()
  add_test(TestMain_NOT_BUILT TestMain_NOT_BUILT)
endif()
