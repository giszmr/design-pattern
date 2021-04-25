#ifndef FAN_ON_COMMAND_H
#define FAN_ON_COMMAND_H

#include "command.h"

class CFanOnCommand : public ICommand {
    public:
        void Execute();
};

#endif
