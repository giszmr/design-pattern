#ifndef FAN_OFF_COMMAND_H
#define FAN_OFF_COMMAND_H

#include "command.h"

class CFanOffCommand : public ICommand {
    public:
        void Execute();
};

#endif
