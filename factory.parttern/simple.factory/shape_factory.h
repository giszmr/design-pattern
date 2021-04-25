#ifndef _SHAPE_FACTORY_H_
#define _SHAPE_FACTORY_H_

#include "shape_ifc.h"

namespace simple_factory {

class MyShapeFactory {
public:
	IMyShape* getShape(int shapeType);
};

}


#endif
