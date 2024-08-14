#include "PlatformHelper.h"
#include <gtest/gtest.h>
#include <iostream>
TEST(PlatformHelper,FilePathWindows)
{
    char filePath[600];
    char buff[500];
    auto instance = PlatformHelper::getInstance();

    std::string myPath = instance->getCurrentWorkingDir()+FILE_SEPARATOR+".."+FILE_SEPARATOR+"assets"+FILE_SEPARATOR;

    std::cout<<"File Path: "<<myPath<<std::endl;

    struct stat sb;
    EXPECT_EQ(stat(myPath.c_str(), &sb),0);
}

