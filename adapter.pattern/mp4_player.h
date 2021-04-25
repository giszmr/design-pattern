#ifndef MP4_PLAYER_H
#define MP4_PLAYER_H

#include <string>
#include "advanced_media_player.h"

using std::string;

class CMp4Player : public IAdvancedMediaPlayer{
    public:
        void PlayMp4(string fileName);
        void PlayVlc(string fileName);
};


#endif
