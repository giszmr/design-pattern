#include <stdio.h>
#include "audio_player.h"


int main(int argc, char* argv[])
{
    CAudioPlayer *audioPlayer = new CAudioPlayer();
    audioPlayer->Play("mp3", "See you, See me");
    audioPlayer->Play("mp4", "Hotel of California");
    audioPlayer->Play("vlc", "My heart vill go on");
    audioPlayer->Play("avi", "FBI warnning");
    
    return 0;
}
