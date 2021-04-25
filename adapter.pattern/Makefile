#use g++ to compile
CC := g++

#First, get all cpp files in current directory. 
cppFiles := $(wildcard *.cpp)
#Then replace .cpp with .o
objects := $(patsubst %.cpp, %.o, $(cppFiles))

#target
myadaptertest : $(objects)
#use command to compile files
	$(CC) -o myadaptertest $(objects)
main.o : audio_player.h
mp4_player.o : mp4_player.h 
vlc_player.o : vlc_player.h
audio_player.o : audio_player.h
media_adapter.o : media_adapter.h advanced_media_player.h vlc_player.h mp4_player.h

.PHONY : clean
clean:
	-rm myadaptertest $(objects)
