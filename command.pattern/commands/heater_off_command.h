#ifndef HEATER_OFF_COMMAND_H
#define HEATER_OFF_COMMAND_H

#include "command.h"

class CHeaterOffCommand : public ICommand {
    public:
        void Execute();
};

#endif
