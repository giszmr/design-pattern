#include <stdio.h>
#include <string>
#include "vlc_player.h"

using std::string;

void CVlcPlayer::PlayVlc(string fileName)
{
    printf("Playing vlc file. Name: %s\n", fileName.c_str());
}

void CVlcPlayer::PlayMp4(string fileName)
{}
