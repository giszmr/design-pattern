objects=main.o mp4_player.o vlc_player.o audio_player.o media_adapter.o
myadaptertest : $(objects)
	g++ -o myadaptertest $(objects)
main.o : audio_player.h
mp4_player.o : mp4_player.h 
vlc_player.o : vlc_player.h
audio_player.o : audio_player.h
media_adapter.o : media_adapter.h advanced_media_player.h vlc_player.h mp4_player.h

.PHONY : clean
clean:
	-rm myadaptertest $(objects)
