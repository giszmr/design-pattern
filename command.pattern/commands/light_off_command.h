#ifndef LIGHT_OFF_COMMAND_H
#define LIGHT_OFF_COMMAND_H

#include "command.h"

class CLightOffCommand : public ICommand {
    public:
        void Execute();
};

#endif
