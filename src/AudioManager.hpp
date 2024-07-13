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
        void initializeAudio();
        void playSound(std::string SoundPath);
        void destroy();
};