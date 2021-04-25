#include "fan_off_command.h"
#include "../entities/fan.h"

void CFanOffCommand::Execute()
{
    CFan fan;
    fan.FanOff();
}
