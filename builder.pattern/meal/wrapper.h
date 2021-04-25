#ifndef WRAPPER_H
#define WRAPPER_H

#include <string>
#include "pack.h"

using namespace std;

class CWrapper : public IPacking {
    public:
        string Pack();
};


#endif
