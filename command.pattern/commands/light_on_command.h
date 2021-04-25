#ifndef LIGHT_ON_COMMAND_H
#define LIGHT_ON_COMMAND_H

#include "command.h"

class CLightOnCommand : public ICommand {
    public:
        void Execute();
};

#endif
