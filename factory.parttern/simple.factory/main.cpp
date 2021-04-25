#include <stdio.h>
#include "shape_ifc.h"
#include "rectangle.h"
#include "circle.h"
#include "shape_factory.h"

using namespace simple_factory;

int main(int argc, char* argv[])
{
	MyShapeFactory *shapeFactory = new MyShapeFactory();

	IMyShape *shape1 = shapeFactory->getShape(0);
	shape1->Draw();

	IMyShape *shape2 = shapeFactory->getShape(1);
	shape2->Draw();


	return 0;
}

