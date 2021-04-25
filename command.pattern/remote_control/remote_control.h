#ifndef REMOTE_CONTROL_H
#define REMOTE_CONTROL_H

#include <map>
#include "../commands/command.h"

using namespace std;

class CRemoteControl {
    public:
        CRemoteControl();
        void PressOnButton(int index);
        void PressOffButton(int index);
        virtual void SetCommand(int index, ICommand *onCommand, ICommand *offCommand);
    private:
        map<int, ICommand*> m_OnCommands;
        map<int, ICommand*> m_OffCommands;
};

#endif
