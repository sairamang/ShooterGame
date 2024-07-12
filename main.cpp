#include <iostream>
#include <AudioManager.hpp>

int main()
{
    std::cout << "Simple Shooter Game for Fun" << std::endl;
    auto audioManagerPtr = AudioManager::getInstance();
    audioManagerPtr->initializeAudio();
    char i;
    while (i != 'q')
    {
        std::cout << "Press any key to play some sound, press 'q' to quit.\n";

        audioManagerPtr->playSound("/home/vboxuser/Workspace/ShooterGame/assets/sound/sample.ogg");

        std::cin >> i; // wait for user to press some key
    }
    return 0;
}