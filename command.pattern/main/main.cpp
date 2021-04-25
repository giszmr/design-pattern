#include <stdio.h>
#include "../entities/fan.h"
#include "../entities/heater.h"
#include "../entities/light.h"
#include "../commands/fan_on_command.h"
#include "../commands/fan_off_command.h"
#include "../commands/light_on_command.h"
#include "../commands/light_off_command.h"
#include "../commands/heater_on_command.h"
#include "../commands/heater_off_command.h"
#include "../remote_control/remote_control.h"

int main(int argc, char* argv[])
{
    CFanOnCommand     *fanOnCommand     = new CFanOnCommand();
    CFanOffCommand    *fanOffCommand    = new CFanOffCommand();
    CHeaterOnCommand  *heaterOnCommand  = new CHeaterOnCommand();
    CHeaterOffCommand *heaterOffCommand = new CHeaterOffCommand();
    CLightOnCommand   *lightOnCommand   = new CLightOnCommand();
    CLightOffCommand  *lightOffCommand  = new CLightOffCommand();
    CRemoteControl    *remoteControl    = new CRemoteControl();
    
    remoteControl->SetCommand(0, fanOnCommand,    fanOffCommand);
    remoteControl->SetCommand(1, heaterOnCommand, heaterOffCommand);
    remoteControl->SetCommand(2, lightOnCommand,  lightOffCommand);
    
    remoteControl->PressOnButton(0);
    remoteControl->PressOffButton(0);
    remoteControl->PressOnButton(1);
    remoteControl->PressOffButton(1);
    remoteControl->PressOnButton(2);
    remoteControl->PressOffButton(2);
    
    return 0;
}
