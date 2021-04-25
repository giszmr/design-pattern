#include <stdio.h>
#include "mp4_player.h"
#include <string>

using std::string;

void CMp4Player::PlayMp4(string fileName)
{
    printf("Playing mp4 file. Name: %s\n", fileName.c_str());
}

void CMp4Player::PlayVlc(string fileName)
{}
