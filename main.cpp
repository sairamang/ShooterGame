#include <iostream>
#include <AudioManager.hpp>
#include <Objects.hpp>
#include <ScreenHandler.hpp>

int main()
{
    std::cout << "Simple Shooter Game for Fun" << std::endl;
    auto audioManagerPtr = AudioManager::getInstance();
    audioManagerPtr->initializeAudio();

    auto InvaderFactory = std::make_shared<InvadersFactory>();
    auto PowerUpsFactory = std::make_shared<PowerUpFactory>();
    auto invader = InvaderFactory->CreateGameObject();
    auto powerup = PowerUpsFactory->CreateGameObject();

    auto ScreenHandlerInstance = ScreenHandler::getInstance();
    ScreenHandlerInstance->start({720,480});

    invader->show();
    powerup->show();

    char i;
    while (i != 'q')
    {
        std::cout << "Press any key to play some sound, press 'q' to quit.\n";

        audioManagerPtr->playSound("/home/vboxuser/Workspace/ShooterGame/assets/sound/sample.ogg");

        std::cin >> i; // wait for user to press some key
    }
    audioManagerPtr->destroy();

    invader->destroy();
    powerup->destroy();
    ScreenHandlerInstance->destroy();

    return 0;
}