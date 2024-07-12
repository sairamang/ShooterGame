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
void AudioManager::initializeAudio()
{

    engine = createIrrKlangDevice();
    if (!engine)
    {
        std::cout << "Audio Initialization Failed" << std::endl;
    }
    else
    {
        std::cout << "Audio Systems Initialized" << std::endl;
    }
}
void AudioManager::playSound(std::string SoundPath)
{
    engine->play2D(SoundPath.c_str(), true);
}