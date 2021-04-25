#ifndef COMMAND_H
#define COMMAND_H

#include <stdio.h>

class ICommand {
    public:
        virtual void Execute() {printf("hhh\n");};
};

#endif
