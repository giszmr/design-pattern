#include "light_off_command.h"
#include "../entities/light.h"

void CLightOffCommand::Execute()
{
    CLight light;
    light.LightOff();
}
