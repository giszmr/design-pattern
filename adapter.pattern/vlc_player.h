#ifndef VLC_PLAYER_H
#define VLC_PLAYER_H

#include <string>
#include "advanced_media_player.h"

using std::string;

class CVlcPlayer : public IAdvancedMediaPlayer{
    public:
        void PlayVlc(string fileName);
        void PlayMp4(string fileName);
};


#endif
