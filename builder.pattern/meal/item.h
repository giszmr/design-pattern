#ifndef ITEM_H
#define ITEM_H

#include <float.h>
#include <string>
#include "pack.h"

using namespace std;

class IItem {
    public:
        virtual string    GetName(){};
        virtual float     GetPrice(){};
        virtual IPacking* Packing(){};
};

#endif
