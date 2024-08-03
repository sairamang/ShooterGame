#pragma once 
#include <string>
#include <irrKlang.h>
using namespace irrklang;
class AudioManager
{
    private:
        static AudioManager* m_instance;
        ISoundEngine* engine;
    public:
        static AudioManager* getInstance();
        bool initializeAudio();
        void playSound(std::string SoundPath);
        void destroy();
};