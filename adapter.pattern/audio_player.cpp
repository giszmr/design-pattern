#include <stdio.h>
#include <string>
#include "audio_player.h"

using std::string;

void CAudioPlayer::Play(string mediaType, string fileName)
{
    if (mediaType.compare("mp3") == 0)
        printf("Playing mp3 file. Name: %s\n", fileName.c_str());
    else if ((mediaType.compare("vlc") == 0)
        || (mediaType.compare("mp4") == 0))
    {
        m_MediaAdapter = new CMediaAdapter(mediaType);
        m_MediaAdapter->Play(mediaType, fileName);
    }
    else
    {
        printf("Invalid media. %s format not supported.\n", mediaType.c_str());
    }
}

