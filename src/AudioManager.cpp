#include "AudioManager.hpp"
#include <iostream>
AudioManager *AudioManager::m_instance = nullptr;
AudioManager *AudioManager::getInstance()
{
    if (m_instance == nullptr)
    {
        m_instance = new AudioManager();
    }
    return m_instance;
}
bool AudioManager::initializeAudio()
{

    engine = createIrrKlangDevice();
    if (!engine)
    {
        std::cout << "Audio Initialization Failed" << std::endl;
        return false;
    }
    else
    {
        std::cout << "Audio Systems Initialized" << std::endl;
        return true;
    }
}
bool AudioManager::playSound(std::string SoundPath)
{
    if (engine)
    {
        engine->play2D(SoundPath.c_str(), true);
        return true;
    }
    else
    {
        return false;
    }
}

bool AudioManager::destroy()
{
    engine->drop(); // delete engine
    engine = nullptr;
    return true;
}