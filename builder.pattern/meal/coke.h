#ifndef COKE_H
#define COKE_H

#include <string>
#include <float.h>
#include "cold_drink.h"

using namespace std;

class CCoke : public IColdDrink {
    public:
        string GetName();
        float  GetPrice();
};


#endif
