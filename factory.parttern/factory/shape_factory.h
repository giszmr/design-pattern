#ifndef _SHAPE_FACTORY_H_
#define _SHAPE_FACTORY_H_

#include "shape_ifc.h"

class MyShapeFactory {
public:
	virtual IMyShape* getShape() = 0;
};




#endif
