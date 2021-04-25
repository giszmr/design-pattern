#include "fan_on_command.h"
#include "../entities/fan.h"

void CFanOnCommand::Execute()
{
    CFan fan;
    fan.FanOn();
}
