#include "shape_factory.h"
#include "shape_ifc.h"

class MyCircleFactory : public MyShapeFactory {
public:
	IMyShape* getShape();
};
