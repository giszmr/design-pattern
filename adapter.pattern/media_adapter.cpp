#include <stdio.h>
#include "advanced_media_player.h"
#include <string>
#include "vlc_player.h"
#include "mp4_player.h"
#include "media_adapter.h"

using std::string;

CMediaAdapter::CMediaAdapter(string mediaType)
{
    if (mediaType.compare("vlc") == 0)
        m_AdvancedMusicPlayer = new CVlcPlayer();
    else if (mediaType.compare("mp4") == 0)
        m_AdvancedMusicPlayer = new CMp4Player();
    else
        printf("Invalid media. %s format not supported.\n", mediaType.c_str());
}

void CMediaAdapter::Play(string mediaType, string fileName)
{
    if (mediaType.compare("vlc") == 0)
        m_AdvancedMusicPlayer->PlayVlc(fileName);
    else if (mediaType.compare("mp4") == 0)
        m_AdvancedMusicPlayer->PlayMp4(fileName);
    else
        printf("Invalid media. %s format not supported.\n", mediaType.c_str());    
}
