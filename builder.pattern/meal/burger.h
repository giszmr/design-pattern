#ifndef BURGE_H
#define BURGE_H

#include <string>
#include "pack.h"
#include "wrapper.h"
#include "item.h"

using namespace std;

class IBurger : public IItem {
    public:
        IPacking* Packing()
        {
            return new CWrapper();
        }
};

#endif
