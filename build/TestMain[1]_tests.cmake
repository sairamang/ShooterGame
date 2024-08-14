add_test([=[HelloTest.BasicAssertions]=]  [==[C:/Users/Sai Raman G/Root/ShooterGame/build/TestMain.exe]==] [==[--gtest_filter=HelloTest.BasicAssertions]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[HelloTest.BasicAssertions]=]  PROPERTIES WORKING_DIRECTORY [==[C:/Users/Sai Raman G/Root/ShooterGame/build]==] SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  TestMain_TESTS HelloTest.BasicAssertions)
