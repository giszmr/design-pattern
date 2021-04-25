#ifndef HEATER_ON_COMMAND_H
#define HEATER_ON_COMMAND_H

#include "command.h"

class CHeaterOnCommand : public ICommand {
    public:
        void Execute();
};

#endif
