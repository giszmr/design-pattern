#include "shape_ifc.h"
#include "shape_factory.h"

class MyRectangleFactory : public MyShapeFactory {
public:
	IMyShape* getShape();
};
