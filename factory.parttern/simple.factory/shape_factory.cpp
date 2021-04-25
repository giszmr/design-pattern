#include "shape_factory.h"
#include "rectangle.h"
#include "circle.h"

namespace simple_factory {
IMyShape* MyShapeFactory::getShape(int shapeType)
{
	if(shapeType == 0)
	{
		return new MyCircle();
	}
	else if(shapeType == 1)
	{
		return new MyRectangle();
	}
	else
	{
		return 0;
	}
}

}
