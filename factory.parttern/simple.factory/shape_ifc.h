#ifndef _SHAPE_IFC_H_
#define _SHAPE_IFC_H_

#include <cstdio>
#include <cstdlib>

namespace simple_factory {

class IMyShape {
public:
	IMyShape(){};
	virtual ~IMyShape() {}; 
	virtual int Draw() {};
};

}

#endif
