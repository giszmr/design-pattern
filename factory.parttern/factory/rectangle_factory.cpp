#include "rectangle_factory.h"
#include "rectangle.h"

IMyShape* MyRectangleFactory::getShape()
{
	return new MyRectangle();
} 
