#ifndef MEDIA_ADAPTER_H
#define MEDIA_ADAPTER_H

#include <string>
#include "advanced_media_player.h"
#include "media_player.h"

using std::string;

class CMediaAdapter : public IMediaPlayer {
    public:
        CMediaAdapter(string mediaType);
        void Play(string mediaType, string fileName);
    private:
        IAdvancedMediaPlayer *m_AdvancedMusicPlayer;
};


#endif
