#ifndef BOTTLE_H
#define BOTTLE_H

#include <string>
#include "pack.h"

using namespace std;

class CBottle : public IPacking {
    public:
        string Pack();
};



#endif
