#include "heater_on_command.h"
#include "../entities/heater.h"

void CHeaterOnCommand::Execute()
{
    CHeater heater;
    heater.HeaterOn();
}
