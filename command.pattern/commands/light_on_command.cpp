#include "light_on_command.h"
#include "../entities/light.h"

void CLightOnCommand::Execute()
{
    CLight light;
    light.LightOn();
}
