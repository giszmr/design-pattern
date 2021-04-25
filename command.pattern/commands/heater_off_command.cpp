#include "heater_off_command.h"
#include "../entities/heater.h"

void CHeaterOffCommand::Execute()
{
    CHeater heater;
    heater.HeaterOff();
}
