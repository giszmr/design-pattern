#include "remote_control.h"
#include "../commands/no_command.h"

CRemoteControl::CRemoteControl()
{
    CNoCommand *noCommand = new CNoCommand();

    for (int i = 0; i < 4; i++)
    {
        m_OnCommands[i] = noCommand;
        m_OffCommands[i] = noCommand;
    }
}


void CRemoteControl::PressOnButton(int index)
{
    m_OnCommands[index]->Execute();
}

void CRemoteControl::PressOffButton(int index)
{
    m_OffCommands[index]->Execute();
}

void CRemoteControl::SetCommand(int index, ICommand *onCommand, ICommand *offCommand)
{
    m_OnCommands[index] = onCommand;
    m_OffCommands[index] = offCommand;
}
