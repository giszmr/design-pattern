#include <stdio.h>
#include "shape_ifc.h"
#include "rectangle.h"
#include "circle.h"
#include "shape_factory.h"
#include "circle_factory.h"
#include "rectangle_factory.h"

int main(int argc, char* argv[])
{
	MyShapeFactory *shapeFactory1 = new MyCircleFactory();

	IMyShape *shape1 = shapeFactory1->getShape();
	shape1->Draw();

	MyShapeFactory* shapeFactory2 = new MyRectangleFactory();
	IMyShape *shape2 = shapeFactory2->getShape();
	shape2->Draw();


	return 0;
}

