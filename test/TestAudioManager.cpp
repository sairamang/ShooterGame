#include <gtest/gtest.h>
#include <AudioManager.hpp>
#include <memory>
#include <iostream>
TEST(AudioManager,AudioManagerCreation)
{
    auto ptr = std::make_shared<AudioManager>();
    EXPECT_NE(ptr,nullptr);
}
TEST(AudioManager,AudioManagerInitialization)
{
    auto ptr = std::make_shared<AudioManager>();
    EXPECT_EQ(ptr->initializeAudio(),true);
}
TEST(AudioManager,AudioManagerPlayAudio)
{   
    auto ptr = std::make_shared<AudioManager>();
    std::string str(get_current_dir_name());
    std::string AudioStr = str+ "/../assets/sound/GameBonus.mp3";
    std::cout<<"Current Directory Name :"<<AudioStr<<std::endl;   
    ptr->initializeAudio();
    ptr->playSound(AudioStr);

}