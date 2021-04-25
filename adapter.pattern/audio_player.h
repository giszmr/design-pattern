#ifndef AUDIO_PLAYER_H
#define AUDIO_PLAYER_H

#include <string>
#include "media_player.h"
#include "media_adapter.h"

using std::string;

class CAudioPlayer : public IMediaPlayer {
    public:
        void Play(string mediaType, string fileName);
    private:
        CMediaAdapter *m_MediaAdapter;
};


#endif
