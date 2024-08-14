#include <gtest/gtest.h>
#include <AudioManager.hpp>
#include <memory>
#include <iostream>
#include "unistd.h"
#include <direct.h>
#include <PlatformHelper.h>

TEST(AudioManager, AudioManagerCreation)
{
    auto ptr = std::make_shared<AudioManager>();
    EXPECT_NE(ptr, nullptr);
}
TEST(AudioManager, AudioManagerInitialization)
{
    auto ptr = std::make_shared<AudioManager>();
    EXPECT_EQ(ptr->initializeAudio(), true);
}
TEST(AudioManager, CurrentWorkingDirectory)
{
    char buff[500];
    EXPECT_NE(getcwd(buff, 500), nullptr);
}
TEST(AudioManager, AudioManagerPlayAudioSuccess)
{
    auto ptr = std::make_shared<AudioManager>();

    char filePath[600];
    char buff[500];
    auto instance = PlatformHelper::getInstance();

    std::string myPath = instance->getCurrentWorkingDir() + FILE_SEPARATOR + ".." + FILE_SEPARATOR + "assets" + FILE_SEPARATOR + "sample.ogg";

    std::cout << "Current Directory Name :" << myPath << std::endl;
    ptr->initializeAudio();
    ptr->playSound(myPath);

    usleep(100000);
}
TEST(AudioManager, AudioManagerPlayAudioFail)
{
    auto ptr = std::make_shared<AudioManager>();
    ptr->initializeAudio();
    char filePath[600];
    char buff[500];
    auto instance = PlatformHelper::getInstance();

    std::string myPath = instance->getCurrentWorkingDir() + FILE_SEPARATOR + ".." + FILE_SEPARATOR + "assets" + FILE_SEPARATOR + "sample.ogg";

    std::cout << "Current Directory Name :" << myPath << std::endl;
    ptr->destroy();
    EXPECT_EQ(ptr->playSound(myPath), false);
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}