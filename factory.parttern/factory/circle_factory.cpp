#include "circle_factory.h"
#include "circle.h"

IMyShape* MyCircleFactory::getShape()
{
	return new MyCircle();
}
