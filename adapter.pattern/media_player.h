#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include <string>

using std::string;

class IMediaPlayer {
    public:
        virtual void Play(string mediaType, string fileName) = 0;
};



#endif
