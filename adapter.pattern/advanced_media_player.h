#ifndef ADVANCED_MEDIA_PLAYER_H
#define ADVANCED_MEDIA_PLAYER_H

#include <string>

using std::string;

class IAdvancedMediaPlayer {
    public:
        virtual void PlayVlc(string fileName) = 0;
        virtual void PlayMp4(string fileName) = 0;
};


#endif
