SUBDIRS     = $(shell ls -F | grep "\/" | sed 's/\///g')
CUR_SOURCES = $(wildcard *.cpp)
CUR_OBJS    = $(patsubst %.cpp, %.o, $(CUR_SOURCES))

.PHONY : all

all : $(SUBDIRS) $(CUR_OBJS)

$(SUBDIRS) : ECHO
	make -C $@

$(CUR_OBJS) : %.o : %.cpp
	$(CC) -c $^ -o $(ROOT_DIR)/$(OBJ_DIR)/$@

ECHO:
	@echo $(SUBDIRS)
